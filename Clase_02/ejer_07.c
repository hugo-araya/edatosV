#include <stdio.h>

void dibuja(int);

int main(){
    int n;
    printf("Cantidad de lineas: ");
    scanf("%d", &n);
    dibuja(n);
    dibuja(2*n);
    return 0; 
}

void dibuja(int lineas){
    int i,j;
    for (i=1;i<=lineas;i++){
        for (j=lineas;j>=i;j--){
            printf("*");
        }
        printf("\n");
      }    
}
