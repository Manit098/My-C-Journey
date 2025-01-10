#include<stdio.h>

int main() {
    // If Else In C 
    int age = 18;
    if(age >= 18) {
        printf("You are eligible to vote\n");
    } else {
        printf("You are not eligible to vote\n");
    }
    // Using Else If In If Else
    int marks = 85;
    if(marks >= 90) {
        printf("Grade: A\n");
    } else if(marks >= 80) {
        printf("Grade: B\n");
    } else if(marks >= 70) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }
    

    return 0;
}