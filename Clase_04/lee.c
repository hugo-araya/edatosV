#include<stdio.h>

int main(){
    FILE *ar;
    char *linea;
    ar = fopen("ar1.txt", "r");
    fscanf(ar, "%s", linea );
    printf("%s", linea);
    fscanf(ar, "%s", linea );
    printf("%s", linea);
    fclose(ar);
    return 0;
}