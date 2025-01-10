#include<stdio.h>

// Structure Are Arrays Big Bros!!!!! Because They Can Store Many Datatypes Arrays 
struct students {
    char name[20];
    int age;
    float marks;
};
int main() {
    // To Make Enters
    struct students student1;
    student1.age = 20;
    student1.marks = 85.5;
    strcpy(student1.name, "Uryu Ishida");
    
    // To Print Them
    printf("The Name Of Student Is %s \n", student1.name);
    printf("The Age Of Student Is %d \n", student1.age);
    printf("The Marks Of Student Is %f \n", student1.marks);
    return 0; 
}