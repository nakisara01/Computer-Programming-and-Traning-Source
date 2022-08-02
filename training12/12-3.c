#define _CRT_SECURE_NO_WARNIGNS
#define GET_BIT(n,pos) ((n) >> (pos) & 0x01) 
#define SET_BIT(n,pos) ((n) |= (0x01 << (pos))) 
#define CLR_BIT(n,pos) ((n) &= ~(0x01 << (pos)))
#include <stdio.h>

int main(void) {
    int n = 0x808081, pos = 0; 
    printf("n = %#08x\n", n);
    
    pos = 0;
    printf("GET_BIT(n, 0): %x\n", GET_BIT(n, pos));
    
    pos = 2;
    printf("SET_BIT(n, %d)\n", pos); 
    printf("n = %#08x\n", SET_BIT(n, pos));
    
    return 0; 
}