#include "uart.h"

void UART_init(UART *uart){
    
    uart->write = UART_write;
    uart->set_baud = UART_write;
    uart->send_paquets = UART_send_paquets;
    
    TRISB |= 0x02; //RX as input
    TRISB &= 0xFB; //TX as output
    UART_set_baud(__DEFAULT_BAUD__);
    
    //Configure transmission / reception
    TXSTA |= 0x24;
    TXSTA &= 0xEF;
    RCSTA |= 0x90;
}
void UART_set_baud(char baud){
    SPBRG = baud;
}
void UART_write(char byte){
    while (!(TXSTA & 0x02)); 
    TXREG = byte;       
}
void UART_send_paquets(char *packets, char length){
    char i = 0;
    for(i = 0; i < length; i++)UART_write(packets[i]);      
}