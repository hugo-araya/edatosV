#include <stdio.h>
#include <stdlib.h> 

struct lista{
    int clave;
    struct lista *sig; 
};

int main(void){
    struct lista *L;
    struct lista *p;
    int i, suma;
    L = NULL; /* Crea una lista vacia */
    for (i = 2000000; i >= 1; i--){
        /* Reserva memoria para un nodo */
        p = (struct lista *) malloc(sizeof(struct lista)); 
        p->clave = i;
        p->sig = L;
        L = p;
    }
    p = L;
    suma = 0;
    while (p != NULL) { 
        printf("%d, ", p->clave); 
        suma = suma + p->clave;
        p = p->sig;
    }
    return 0; 
}