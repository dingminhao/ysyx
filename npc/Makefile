TOP_MODULE := ysyx_top

# 原文件
CSRC +=  $(shell find $(abspath ./csrc) -name "*.cpp")
VSRC +=  $(shell find $(abspath ./vsrc) -name "*.v" -or -name "*.sv")

VERILATOR_INC_PATH := -I./vsrc

# verilator flags: 
VERILATOR_FLAGS +=   --cc --exe --build --trace  
VERILATOR_FLAGS += ${VERILATOR_INC_PATH}
VERILATOR_FLAGS += --top ${TOP_MODULE}


# gcc flags 
GCC_INC_PATH = -I$(NPC_HOME)/csrc/include 

# llvm
LLVM_LIB = $(shell llvm-config-14 --libs)
LLVM_FLAGS = $(filter-out -D__STDC_FORMAT_MACROS, $(shell llvm-config --cxxflags)) -fPIE


#-lasan(内存检查)
GCC_LIB = -ldl \
		  -lSDL2 \
		  -lreadline
GCC_LIB += ${LLVM_LIB}


GCC_LDFLAGS := $(addprefix -LDFLAGS ,${GCC_LIB})
GCC_CFLAGS := ${GCC_INC_PATH}
GCC_CFLAGS += $(addprefix -CFLAGS ,${LLVM_FLAGS})
GCC_FLAGS := ${GCC_CFLAGS} ${GCC_LDFLAGS}

IMG?=
# run info:
OBJ_DIR := ./obj_dir
BIN := ${OBJ_DIR}/V${TOP_MODULE}

com:${CSRC} ${VSRC}
	@verilator ${VERILATOR_FLAGS} ${CSRC} ${VSRC} ${GCC_FLAGS} 

all: default
	@echo "Write this Makefile by your self."

run: com
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
# 运行 bin文件,传入 img 参数
	${BIN} ${IMG} 
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."


include ../Makefile
