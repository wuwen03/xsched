WORK_PATH = $(dir $(abspath $(lastword $(MAKEFILE_LIST))))
XSCHED_PATH = $(abspath $(WORK_PATH)/../..)
XSCHED_INCLUDE_PATH = $(XSCHED_PATH)/output/include
XSCHED_LIB_PATH = $(XSCHED_PATH)/output/lib

# Compiler and flags
NVCC = nvcc
NVCC_FLAGS = -O3 -std=c++11 -I$(XSCHED_INCLUDE_PATH)
# link XSched libraries and set rpath so that the app can find the libraries
NVCC_LDFLAGS = -Xlinker -rpath -Xlinker $(XSCHED_LIB_PATH) -L$(XSCHED_LIB_PATH) -lpreempt -lhalcuda

# Target executable
TARGET = app_concurrent

# Source files
SRC = app_concurrent.cu

all: $(TARGET)

$(TARGET): $(SRC)
	$(NVCC) $(NVCC_FLAGS) $(NVCC_LDFLAGS) -o $@ $<

clean:
	rm -f $(TARGET)

.PHONY: all clean
