#ifndef __DEVTTY_DOT_H__
#define __DEVTTY_DOT_H__

void tty_putc(uint8_t minor, char c);
bool tty_writeready(uint8_t minor);
void tty_init_port(void);
void tty_irq(void);
#endif
