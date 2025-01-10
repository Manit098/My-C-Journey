#include<stdio.h>

int main(){
    // Taking Input Form User
    const char name[20];
    printf("Enter Your Name: \n");
    scanf("%s", &name);
    // fgets(name, 20, stdin);
    /* For Taking Full Name Means If User Give A Space It Will Be Stored*/
    printf("Your Name Is %s \n", name);
    return 0;
}