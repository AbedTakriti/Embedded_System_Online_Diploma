
#include "uart.h"
#define UART0DR *((volatile unsigned int* const)((unsigned int*)0x101f1000))

void Uart_Send_String(unsigned char* p_char)
{
    while (*p_char != '\0')
    {
        UART0DR = (unsigned int)(*p_char);
        p_char++;
    }

}