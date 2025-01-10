#include<stdio.h>

int main(){
    // Pointers 
    /* Pointers Are Variables Used To Store Address Of Variables */
    int num = 10;
    int *ptr = &num; // * for a pointers 
    printf("Value of num = %d \n", num);
    printf("Address of num = %p \n", *ptr);
}