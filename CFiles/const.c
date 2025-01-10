#include <stdio.h>

int main(){
    // Const In Variables
    int abc = 123;
    abc = 1234;
    printf("%d \n", abc);
    // Now Using Const 
    const int hello = 12346;
    // hello = 12345; - Error
    printf("%d \n", hello);

    return 0;
}