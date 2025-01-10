#include<stdio.h>

int main(){
    // Memory Address
    int x = 100;
    printf("Memory Address of x: %p \n", &x);
    /* We Also Use
    u for 16 bit
    lu for 32 bits
    llu for 64 bit 
    but sometimes it dont work so the best way is %p */
    return 0;
}