#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    float resultado;
    printf("Ingrse la base: ");
    scanf("%d", &a);
    printf("Ingrse la exponente: ");
    scanf("%d", &b);   
    resultado = pow(a, b);
    printf("Resultado: %f\n", resultado);
    return 0; 
}