#include "io.h"
#include "fb.h"
#include "serial_port.h"
#include "gdt.h"
#include "interrupts.c"

#define POSITION 0
#define PORT 0x3F8

void init(){
    init_gdt();
    
    interrupts_install_idt();
}

    /* The C function */
    int sum_of_three(int arg1, int arg2, int arg3)
    {
        return arg1 + arg2 + arg3;
    }

    void run(){
        char c[] = "Welcome";
        write(c, 9);

        serial_write(SERIAL_COM1_BASE, c, 7);
    }
