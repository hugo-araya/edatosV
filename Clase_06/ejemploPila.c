#include <stdio.h>
#include "PILA.h"

int main(void){
    struct tpila *pila;
    int elem;   
    crear(&pila);
    if (vacia(pila)) 
        printf("\nPila vacia!\n"); 
    push(pila, 1);
    pop(pila, &elem);
    printf("%d\n", elem);
    return 0; 
}