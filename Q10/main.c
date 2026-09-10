#include <stdio.h>
#include <stdint.h>
int main()
{
    uint8_t rx_buffer[] = {0xAA,0x10,0x20,0x30,0x40,0x55};
    int length=0;

    

    while(rx_buffer[length]!=0x55)
    {
        length++;
    }
    
    printf("length = %d\n",length);
    return 0;
}