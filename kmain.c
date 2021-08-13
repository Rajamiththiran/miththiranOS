#include "io.h"
#include "fb.h"
#include "serial_port.h"
#include "drivers/gdt.h"

#define POSITION 0

void init(){
    init_gdt();
}

void kmain()
{
    init();

    char str[] = "Hello, Welcome to miththiranOS...!!!";
    //determining the length of the string
    unsigned int len = sizeof(str) / sizeof(str[0]);
    
    //frame builder writing
    fb_write(POSITION, str, len);
    
    //serial writing
    char str2[] = "Hello miththiran varathan";
    serial_write(0x3F8, str2, 21);
}



