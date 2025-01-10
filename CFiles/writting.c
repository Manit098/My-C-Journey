#include<stdio.h>

int main() {
    // Writting Files
    FILE *file = fopen("../test/index.html", "w");
    fprintf(file, "<h1>index</h1>");
    fclose(file);
    return 0;
}