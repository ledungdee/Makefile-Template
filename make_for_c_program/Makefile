.PHONY: build clean
PRJ_NAME	= countdown
PRJ_DIR		= .
BUILD_DIR	= $(PRJ_DIR)/build
BIN_DIR		= $(PRJ_DIR)/bin
SRC_DIRS	= $(PRJ_DIR)/src
INC_DIRS	= $(PRJ_DIR)/inc

CC		= gcc

SRC_PATHS := $(foreach src_dir,$(SRC_DIRS),$(wildcard $(src_dir)/*.c))
INC_PATHS := $(foreach inc_dir,$(INC_DIRS),$(wildcard $(inc_dir)/*.h))


OBJ_FILES := $(notdir ${SRC_PATHS})
OBJ_FILES := $(subst .c,.o,${OBJ_FILES})
BUILD_PATHS := $(foreach obj_file, ${OBJ_FILES}, ${BUILD_DIR}/${obj_file})

# define where to search .c and .h
vpath %.c $(SRC_DIRS)
vpath %.h $(INC_DIRS)

build: $(OBJ_FILES)
	$(CC) $(BUILD_PATHS) -o $(BIN_DIR)/$(PRJ_NAME)

run-%: 
	$(BIN_DIR)/$(PRJ_NAME) $(subst run-,,$@) 

%.o:%.c $(INC_PATHS)
	$(CC) -c $< -o $(BUILD_DIR)/$@ -I $(INC_DIRS)
	#echo $^
	#echo $@

print-%:
	@echo $($(subst print-,,$@))
	
clean:
	rm -f $(BUILD_DIR)/* $(BIN_DIR)/*
	
