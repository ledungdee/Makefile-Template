PRJ_NAME 	= template-stm32f103
PRJ_DIR		= .
BUILD_DIR	= $(PRJ_DIR)/build
BIN_DIR		= $(PRJ_DIR)/bin

SRC_DIRS	= $(PRJ_DIR)/src
INC_DIRS	= $(PRJ_DIR)/inc


SRC_PATHS 		:= $(foreach src_dir,$(SRC_DIRS),$(wildcard $(src_dir)/*.c))
INC_PATHS 		:= $(foreach inc_dir,$(INC_DIRS),$(wildcard $(inc_dir)/*.h))

OBJ_FILES 		:= $(notdir ${SRC_PATHS})
OBJ_FILES 		:= $(subst .c,.o,${OBJ_FILES})
OBJ_PATHS		:= $(foreach obj_file, ${OBJ_FILES}, ${BUILD_DIR}/${obj_file})

# define where to search .c and .h
vpath %.c $(SRC_DIRS)
vpath %.h $(INC_DIRS)
LINKER_FILE 	:= $(PRJ_DIR)/linker/STM32F102XB_FLASH.ld
COMPILER_DIR	:= D:\exe\Arm-GNU-Toolchain
ST-LINK_DIR		:= D:\exe\ST-LINK
CC				:= $(COMPILER_DIR)/bin/arm-none-eabi-gcc
LD 				:= $(COMPILER_DIR)/arm-none-eabi/bin/ld.exe
CC_OPT			:= -mcpu=cortex-m3 -c -o0 -g -mthumb -I $(INC_DIRS)
LD_OPT			:= -T $(LINKER_FILE) -Map $(BUILD_DIR)/$(PRJ_NAME).map

build: $(OBJ_FILES) $(LINKER_FILE)
	$(LD) $(LD_OPT) $(OBJ_PATHS) -o $(BIN_DIR)/$(PRJ_NAME).elf 
	$(COMPILER_DIR)/bin/arm-none-eabi-objcopy -O ihex $(BIN_DIR)/$(PRJ_NAME).elf $(BIN_DIR)/$(PRJ_NAME).hex
	$(COMPILER_DIR)/bin/arm-none-eabi-objcopy -O binary -S $(BIN_DIR)/$(PRJ_NAME).elf $(BIN_DIR)/$(PRJ_NAME).bin
	size $(BIN_DIR)/$(PRJ_NAME).elf

%.o: %.c $(INC_PATHS)
	$(CC) $(CC_OPT) -c $< -o $(BUILD_DIR)/$@

flash:
	$(ST-LINK_DIR)/ST-LINK_CLI.exe -p $(BIN_DIR)/$(PRJ_NAME).hex 0x08000000

erase:
	$(ST-LINK_DIR)/ST-LINK_CLI.exe -rst
	
clean: 
	rm -rf $(BUILD_DIR)/*
	rm -rf $(BIN_DIR)/*	
