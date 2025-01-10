#include<stdio.h>

int main() {
    // Switch In C 
    /* We Cant Use If Else All Time Because It Take Many Lines We Can Use Switch Instead 
    In Switch We Pass Case And Use Break Key Word To Break On That Case Break Key Word Is Important Okay  Example - */
   char grade = "A";
    switch (grade) {
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Average");
            break;
        default:
            printf("Poor");
            break;
    };
    return 0;
}