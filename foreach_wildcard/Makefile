.PHONY: clean all 
SRC_DIRS = ./src
SRC_DIRS += ./src2
SRC_DIRS += ./src/src1


SRCS_DIRS = $(foreach src_dir, $(SRC_DIRS), $(wildcard $(src_dir)/*.c))
SRCS = $(notdir $(SRCS_DIRS))
OBJS = $(subst .c,.o,${SRCS})

a = $(wildcard $(SRC_DIRS)/*)
b = $(foreach src_dir, $(SRC_DIRS), $(wildcard $(src_dir)/*.c))
c = $(notdir $(b) )
d = $(subst .c,.o,${c})

#SOURCES := $(wildcard ${SRC_DIR}/*.c)
#OBJECTS := $(SOURCES:.c=.o)

print-%:
	@echo $($(subst print-,,$@))
