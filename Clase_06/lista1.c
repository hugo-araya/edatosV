#include <stdio.h>
#include <stdlib.h>

struct lista{
    int clave;
    struct lista *sig;
};

int main(){
    // Se crean los punteros a dos listas.
    struct lista *L;
    struct lista *p;
    int i;
    L = NULL; // Se inicializa a NULL el puntero a la lista principal
    for (i = 4; i >= 1; i--){
        // Reserva memoria para un nodo 
        p = (struct lista *) malloc(sizeof(struct lista));
        p->clave = i; // Agrega la informacion 
        p->sig = L; // Reorganiza la lista 
        L = p;      // ACtualiza los enlaces
    }
    return 0;
}