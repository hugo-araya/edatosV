#include <stdio.h>
#include <stdlib.h>

struct lista{
    int clave;
    struct lista *sig;
};

void crea_lista(struct lista **L);

int main(){
    // Se crean los punteros a dos listas.
    struct lista *L;
    struct lista *p;
    int i, suma;
    crea_lista(&L); // Se inicializa a NULL el puntero a la lista principal
    for (i = 4; i >= 1; i--){
        // Reserva memoria para un nodo 
        p = (struct lista *) malloc(sizeof(struct lista));
        p->clave = i; // Agrega la informacion 
        p->sig = L; // Reorganiza la lista 
        L = p;      // ACtualiza los enlaces
    }

    // Recorremos la lista y de paso sumamos el valor
    // de los datos almacenados en ella
    p = L;
    suma = 0;
    while (p != NULL) {
        printf("%d, ", p->clave);
        suma = suma + p->clave;
        p = p->sig;
    }
    printf("\n");
    return 0;
}

void crea_lista(struct lista **L){
    *L = (struct lista *) malloc(sizeof(struct lista)); 
    (*L)->sig = NULL;
}