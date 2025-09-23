/// header.h ///

#include<LPC21xx.h>

extern void delay_sec(unsigned int sec);
extern void delay_msec(unsigned int msec);

extern void lcd_data(unsigned int data);
extern void lcd_cmd (unsigned int cmd);
extern void lcd_init(void);
extern void lcd_string(char *ptr);
extern void lcd_integer(int num);
extern void lcd_cgram (void);

extern void uart0_init(unsigned int baud);
extern void uart0_tx(unsigned int data);
extern unsigned char uart0_rx(void);
extern void uart0_tx_string(char *ptr);
extern void uart0_binary(int num);
