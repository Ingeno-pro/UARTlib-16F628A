 /*
 * File:   uart.h
 * Author: Ign555
 * Version: 1.0
 * Created on 4 janvier 2025, 11:15
 */

#include <xc.h>

#ifndef _XTAL_FREQ
#define _XTAL_FREQ 4000000
#endif
#ifndef __DEFAULT_BAUD__
#define __DEFAULT_BAUD__ 25 //9600 baud (_XTAL_FREQ/(16*baud) - 1) 
#endif

#ifndef __UART_H__
#define __UART_H__
typedef struct UART
{
    void (*write)(char byte);
    void (*set_baud)(char baud);
    void (*send_paquets)(char *packets, char length);
    
}UART;

void UART_init(UART *uart);
void UART_set_baud(char baud);
void UART_write(char byte);
void UART_send_paquets(char *packets, char length);
#endif