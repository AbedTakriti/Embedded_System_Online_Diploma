#@ Copyright: Abed_takriti
CC= arm-none-eabi-
CFLAGS = -mcpu=arm926ej-s
INCS= -I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
ASSEM = $(wildcard *.s)
ASSEMOBJ = $(ASSEM:.s=.o)
PROJECT_NAME = TOGGLE_LED
all: $(PROJECT_NAME).bin
	@echo "Building is done"


%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@

$(PROJECT_NAME).elf: $(ASSEMOBJ) $(OBJ)
	$(CC)ld.exe -T abed.ld $(LIBS) $(OBJ) $(ASSEMOBJ) -o $@ -Map=Map_file.map

$(PROJECT_NAME).bin: $(PROJECT_NAME).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all: 
	rm *.o *.elf *.bin
clean:
	rm *.elf *.bin