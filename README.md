# UARTlib-16F628A's library guide
## Information 
This library is provided for XC8 Compiler and more precisely for 16F627A/16F628A/16F647A/16F648A.

## Install
In order to install this library, just put the source files into your MPLABX project.
Put the uartlib.c into the "Source files" folder and the uartlib.h into the "Header files" folder.

## Use 
As for use this library, you should import it by put `#include "uartlib.h"` at the begining of your main.c file  

/!\ Warning : You can only use UART on RB1 and RB2, do not give other functions to these pins
/!\ Warning : The library work with the internal crystal frenquency, if you mind to change the frequency, please edit `_XTAL_FREQ` in uartlib.h

### Documentation
The provided library is very easy to use. You have to first Create a `UART` object then initialize it by using `UART_init(&name_of_uart_object){`  
Here is an example :  
```
//Example to add
```
Here is some information about library's functions  
`uart.set_baud(char baud)` : Edit the baud value, the value that you have to put in argument can be calculated with the formula in the next section
`uart.write(char c)` : Send a byte UART 
`uart.send_paquets(char *packets, char length)` : Send multiple bytes by UART

## How to calculate the value to put in set_buad ?

The value to put in set_baud is callen the SPBRG, it's calculated with the formula below.  
  
![image](https://github.com/user-attachments/assets/726b9034-6326-40e9-97b6-61b29b23a28d)  

With FOSC = _XTAL_FREQ

## Changelog

05/01/2025 : UARTlib-16F628A  v1.0 release

Please, if you have any suggest/question contact me on contact@ingeno.fr
