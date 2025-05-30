# Copyright 2024 NXP
# NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
# accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
# activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
# comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
# terms, then you may not retain, install, activate or otherwise use the software.

makefile_name := $(abspath $(lastword $(MAKEFILE_LIST)))
makefile_path := $(strip $(patsubst %/,% , $(dir $(makefile_name))))
libfile_path := $(makefile_path)/../lib/native

CC := gcc
PRJ_DIR := $(makefile_path)/..
LVGL_DIR := $(PRJ_DIR)
SIMULATOR_DIR := $(makefile_path)
LVGL_DIR_NAME ?= lvgl
AFLAGS := -MMD -MP -DLV_CONF_INCLUDE_SIMPLE=1 -I$(makefile_path)/
CFLAGS := -O3 -g0 -I$(LVGL_DIR)/ -I$(makefile_path)/ -I$(makefile_path)/modules/rlottie -c -fmessage-length=0
CFLAGS += -I$(LVGL_DIR)/$(LVGL_DIR_NAME)/ -I$(LVGL_DIR)/$(LVGL_DIR_NAME)/src -I$(LVGL_DIR)/$(LVGL_DIR_NAME)/src/misc

ifeq ($(OS),Windows_NT)
-include $(SIMULATOR_DIR)/gg_external_data/freemaster/freemaster.mk
-include $(SIMULATOR_DIR)/gg_external_data/gg_external_data.mk
LDFLAGS := -lSDL2 -L$(libfile_path) -ldecoder -lopenh264 -lrlottie -lpthread -lstdc++ -ljansson -lcurl -lm
else
LDFLAGS := -lSDL2 -L$(libfile_path) -ldecoder -lopenh264 -lrlottie -lpthread -lstdc++ -lm -ldl
endif

BUILD_DIR := build/
OBJ_DIR := $(BUILD_DIR)object/
GEN_OBJ_DIR := $(OBJ_DIR)generated/
BIN_DIR := $(BUILD_DIR)bin/

NORMAL_OUT := 1

RM := rm -f
RMDIR := rm -rf

ifeq ($(OS),Windows_NT)
LDFLAGS += -L$(SIMULATOR_DIR)\modules\SDL2\i686-w64-mingw32\lib
SIMULATOR_EXE = simulator.exe
SIMULATOR_DLL = simulator.dll
BUILD_ENV := build\object build\bin
NULL_OUT := nul
MKDIR_P = @if not exist "$(1)" mkdir "$(1)"
else
SIMULATOR_EXE = simulator
NULL_OUT := /dev/null
MKDIR_P = @if [ ! -d "$(1)" ]; then mkdir -p "$(1)"; fi
endif

CFLAGS += -DLV_CONF_INCLUDE_SIMPLE=1 $(EXTRA_CFLAGS)

#Collect the files to compile
LVGL_PATH := $(LVGL_DIR)/$(LVGL_DIR_NAME)
-include $(LVGL_DIR)/$(LVGL_DIR_NAME)/lvgl.mk
-include $(PRJ_DIR)/generated/generated.mk
-include $(PRJ_DIR)/custom/custom.mk

CSRCS += main.c simulator_icon.c
DEPPATH += --dep-path $(makefile_path)/
VPATH += :$(makefile_path)/

#SDL2
ifeq ($(OS),Windows_NT)
CFLAGS += "-I$(SIMULATOR_DIR)\modules\SDL2\i686-w64-mingw32\include" -MMD -MP
endif

OBJEXT := .o

AOBJS = $(notdir $(ASRCS:.S=$(OBJEXT)))
COBJS = $(notdir $(CSRCS:.c=$(OBJEXT)))
GEN_AOBJS = $(notdir $(GEN_ASRCS:.S=$(OBJEXT)))
GEN_COBJS = $(notdir $(GEN_CSRCS:.c=$(OBJEXT)))

SRCS = $(ASRCS) $(CSRCS)
OBJS = $(addprefix $(OBJ_DIR), $(AOBJS) $(COBJS))
DEPS = $(OBJS:$(OBJEXT)=.d)

GEN_SRCS = $(GEN_ASRCS) $(GEN_CSRCS)
GEN_OBJS = $(addprefix $(GEN_OBJ_DIR), $(GEN_AOBJS) $(GEN_COBJS))
DEPS += $(GEN_OBJS:$(OBJEXT)=.d)

.PHONY: all env clean default cp_lib clean_gen run
ifeq ($(OS),Windows_NT)
all: env default cp_lib
else
all: env default
endif
# monitor header files
-include $(DEPS)

env:
	$(call MKDIR_P,build/bin)
	$(call MKDIR_P,build/object/generated)

$(OBJ_DIR)%.o: %.S
	@echo "Compiling $<"
	@$(CC)  $(AFLAGS) -c $< -o $@

$(OBJ_DIR)%.o: %.c
	@echo "Compiling $<"
	@$(CC)  $(CFLAGS) -c $< -o $@

$(GEN_OBJ_DIR)%.o: %.c
	@echo "Compiling $<"
	$(call MKDIR_P,$(dir $@))
	@$(CC)  $(CFLAGS) -c $< -o $@

default: $(OBJS) $(GEN_OBJS)
	@echo "Linking $(SIMULATOR_EXE)"
	@ar -csr $(GEN_OBJ_DIR)/libgenerated.a $(GEN_OBJS)
	@$(CC) -o $(BIN_DIR)$(SIMULATOR_EXE) $(OBJS) -L$(GEN_OBJ_DIR) -lgenerated $(LDFLAGS)
ifeq ($(OS),Windows_NT)
	@echo "Linking $(SIMULATOR_DLL)"
	@$(CC) --shared -o $(BIN_DIR)$(SIMULATOR_DLL) $(OBJS) -L$(GEN_OBJ_DIR) -lgenerated $(LDFLAGS) --entry=_DllMainCRTStartup@12
endif
cp_lib:
	-@cp modules/SDL2/lib/SDL2.dll build/bin/SDL2.dll $(NORMAL_OUT)>$(NULL_OUT)
	-@cp modules/SDL2/lib/libopenh264.dll build/bin/libopenh264.dll $(NORMAL_OUT)>$(NULL_OUT)
	-@cp modules/multi_thread/libgcc_s_dw2-1.dll build/bin/libgcc_s_dw2-1.dll $(NORMAL_OUT)>$(NULL_OUT)
	-@cp modules/multi_thread/pthreadGC-3.dll build/bin/pthreadGC-3.dll $(NORMAL_OUT)>$(NULL_OUT)
	-@cp modules/multi_thread/libjansson-4.dll build/bin/libjansson-4.dll $(NORMAL_OUT)>$(NULL_OUT)
	-@cp modules/multi_thread/libcurl.dll build/bin/libcurl.dll $(NORMAL_OUT)>$(NULL_OUT)
clean:
	-@$(RMDIR) build

gen_images := $(wildcard $(PRJ_DIR)/generated/images/*.c)
gen_srcs := $(gen_images) $(wildcard $(PRJ_DIR)/generated/*.c) $(wildcard $(PRJ_DIR)/generated/*.h)

ifeq ($(OS),Windows_NT)
clean_gen_img:
	-@rm $(gen_images)

clean_gen: clean_gen_img
	-@rm $(gen_srcs)
run:
	build\bin\simulator.exe
else

clean_gen_img:
	$(RM) $(LVGL_DIR)/generated/images/*.c

clean_gen: clean_gen_img
	$(RM) $(LVGL_DIR)/generated/*.c
	$(RM) $(LVGL_DIR)/generated/*.h

run:
	./build/bin/simulator

endif
