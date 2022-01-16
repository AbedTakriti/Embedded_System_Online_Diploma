#include "uart.h"
unsigned char string_buffer[100]="This is Lab1 in Embedded C: My first code linked from scratch";
void main()
{
Uart_Send_String(string_buffer);

}