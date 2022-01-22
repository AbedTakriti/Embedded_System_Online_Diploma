/*startup CortexM3
Eng. Abdulrahman
*/
/*SRAM starts at 0x20000000*/

.global _reset

.word 0x20001000 // stack top address

.section .vectors
.word 0x20001000 // stacktop address
.word _reset
.word Vector_handler
.word Vector_handler

.section .text

_reset:
	bl main
	b .
.thumb_func
Vector_handler:
	b _reset