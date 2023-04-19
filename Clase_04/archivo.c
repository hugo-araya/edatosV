#include<stdio.h>

int main(){
    FILE *ar;
    ar = fopen("ar1.txt", "w");
    fprintf(ar, "Hola mundo");
    fclose(ar);
    return 0;
}