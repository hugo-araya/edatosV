#include <stdio.h>
#include "PILA.h"

int main(void){
    PILA *pila;
    PILA *pila1;
    int elem;   
    crear(&pila);
    crear(&pila1);
    if (vacia(pila)) 
        printf("\nPila vacia!\n"); 
    push(pila, 1);
    push(pila , 5);
    push(pila1, 100);
    push(pila1, 200);
    pop(pila, &elem);
    printf("%d\n", elem);
    pop(pila1, &elem);
    printf("%d\n", elem);
    return 0; 
}