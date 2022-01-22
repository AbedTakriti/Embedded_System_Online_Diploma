/*linker script CortexM3
Eng.Abdulrahman*/

MEMORY
{
FLASH(rx) : ORIGIN = 0x08000000, LENGTH = 128K
SRAM(rwx) : ORIGIN = 0x20000000, LENGTH = 20K
}

SECTIONS
{
	.text :
	{
		*(.vectors*) /* include any vecotrs section that exists in any object files*/
		*(.text*)
		*(.rodata*)
		_E_text = .;
	}> FLASH

	.data : 
	{
		_S_DATA = .;
		*(.data)
		_E_DATA = .;
		. = ALIGN(4); /*shall be done to ensure memory allignment is byte by byte (4's increment)*/
		
	}> SRAM AT> FLASH /* normally load time in flash, run time in sram */

	.bss :
	{
		_S_bss = .;
		*(.bss)
		_E_bss = .;
		. = ALIGN(4);
		. = .+0x1000;
		_stack_top = .;
	}> SRAM



}