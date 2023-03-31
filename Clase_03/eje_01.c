#include <stdio.h>

int multiplicar(int a,int b);
int suma(int a,int b);

int main(){ /* Realiza una suma */
    int a=10,b=25,t;
    t=suma(a,b); /* guardamos el valor */
    printf("%d = %d\n",suma(a,b),t);
    suma(a,b); /* el valor se pierde */
    return 0;
}

int multiplicar(int a,int b){
    printf("%d - %d\n", a, b);
    suma(a, b);
    return (a*b);
}

int suma(int a,int b){
    printf("%d - %d\n", a, b);
    multiplicar(a, b);
    return (a+b);
}