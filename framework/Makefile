CC = gcc
AR = ar

TARGET_LIB = libhdtmp.a

OBJS = timeSample.o pmuSample.o

HEADERS = timeSample.h pmuSample.h taskIsolation.h thread.h

INSTALL_DIR = /usr/local
INCLUDE_DIR = $(INSTALL_DIR)/include/framework
LIB_DIR = $(INSTALL_DIR)/lib

CFLAGS = -g -O3 -Wall
LIBFLAGS = -lpthread -lrt
CFLAGS += -DPMU_MONITOR
CFLAGS += -D_GNU_SOURCE
CFLAGS += -D__arch_x86__=1

# Detect the x86 "model" field (the line "model : NN", not "model name").
CPU_MODEL := $(shell awk -F: '/^model[[:space:]]*:/ {gsub(/[^0-9]/, "", $$2); print $$2; exit}' /proc/cpuinfo)

# Select the matching PMU event table. The generated pmc/cpu/*_core.h headers
# emit "ISO C99 requires whitespace after the macro name" warnings; they are
# harmless and are not treated as errors here.
ifeq ($(CPU_MODEL),85)
	CFLAGS += -DCPU_CASCADELAKEX
else ifeq ($(CPU_MODEL),151)
	CFLAGS += -DCPU_ALDERLAKE
else ifeq ($(CPU_MODEL),94)
	CFLAGS += -DCPU_SKYLAKE
else ifeq ($(CPU_MODEL),158)
	CFLAGS += -DCPU_SKYLAKE
else
	$(error Unsupported CPU model '$(CPU_MODEL)': add a mapping in framework/Makefile)
endif

$(TARGET_LIB): $(OBJS)
	$(AR) -cvr $@ $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $^
	@echo "CPU_MODEL: $(CPU_MODEL)"

install:
	@echo "install headers"
	sudo mkdir -p $(INCLUDE_DIR)/pmc/cpu
	sudo cp $(HEADERS) $(INCLUDE_DIR)/
	sudo cp $(wildcard pmc/*.h) $(INCLUDE_DIR)/pmc/
	sudo cp $(wildcard pmc/cpu/*.h) $(INCLUDE_DIR)/pmc/cpu/
	@echo "install lib"
	sudo cp $(TARGET_LIB) $(LIB_DIR)

uninstall:
	@for header in $(HEADERS); do \
		sudo rm -f $(INCLUDE_DIR)/$$header; \
	done
	sudo rm -rf $(INCLUDE_DIR)/pmc
	sudo rmdir $(INCLUDE_DIR) 2>/dev/null || true
	sudo rm -f $(LIB_DIR)/$(TARGET_LIB)

clean:
	rm -f *.o *.a

remake:
	$(MAKE) clean
	$(MAKE)

.PHONY: install uninstall clean remake
