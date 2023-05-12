#include <stdio.h>
#include <stdlib.h>

struct lista{
    int clave;
    struct lista *sig;
};

void crea_lista(struct lista **L);
void add_inicio(struct lista **L, int elem);
void recorre(struct lista **L);

int main(){
    // Se crean los punteros a dos listas.
    struct lista *L;
    struct lista *p;
    int i, suma;
    crea_lista(&L); // Se inicializa a NULL el puntero a la lista principal
    for (i = 4; i >= 1; i--){
        add_inicio(&L, i);
        printf("%d ", i);
    }
    printf("\n");
    // Recorremos la lista y de paso sumamos el valor
    // de los datos almacenados en ella
    recorre(&L);
    return 0;
}

void crea_lista(struct lista **L){
    *L = (struct lista *) malloc(sizeof(struct lista)); 
    (*L)->sig = NULL;
}

void add_inicio(struct lista **L, int elem){
    struct lista *p;
    p = (struct lista *) malloc(sizeof(struct lista));
    p->clave = elem; // Agrega la informacion 
    p->sig = *L; // Reorganiza la lista 
    *L = p;   
}

void recorre(struct lista **L){
    struct lista *p;
    int suma;
    p = *L;
    suma = 0;
    while (p->sig != NULL) {
        printf("%d, ", p->clave);
        suma = suma + p->clave;
        p = p->sig;
    }
    printf("\n");
}