#include<stdio.h>

int main(){
    // Reading Files
    char line[256]; // We Read Files Line By Line 
    FILE *file = fopen("../test/index.html", "r");
    fgets(line, 256, file);
    printf("%s \n", line);
    fclose(file);
    return 0;
}