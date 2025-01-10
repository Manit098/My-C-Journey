#include<stdio.h>

int main(){
    // Loops In C
    // While Loop And Do While Loop
    int i = 0;
    while(i < 5){
        printf("%d \n", i);
        i++;
    }
    // Do While Loop
    do{
        printf("%d \n", i);
        i++;
    }while(i < 5);
    
    // For Loop
    for(i = 0; i < 5; i++){
        printf("%d \n", i);
    }
    
    // Nested Loop
    for(i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("(%d,%d) \n", i, j);
        }
    }
    return 0;

}