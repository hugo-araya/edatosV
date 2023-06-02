#include <stdlib.h>

struct tlista{
    int clave;
    struct tlista *sig;
};

typedef struct tlista LISTA;

void crear(LISTA **lista);
int vacia(LISTA *lista);
void agregar(LISTA **lista, int elem);
void recorrer(LISTA **lista);

void recorrer(LISTA **lista){
    LISTA *p;
    p = *lista;
    while (p != NULL){
        printf("%d - ", p->clave);
        p = p->sig;
    }
    printf("\n");
}

void agregar(LISTA **lista, int elem){
    LISTA *nuevo;
    nuevo = (LISTA *)malloc(sizeof(LISTA));
    nuevo->clave = elem;
    if (*lista == NULL){
        nuevo->sig = nuevo;
    }
    else{
        nuevo->sig = (*lista)->sig;
        (*lista)->sig = nuevo;
    }
    (*lista) = nuevo;
}

int vacia(LISTA *lista){
    return (lista == NULL);
}

void crear(LISTA **lista){
    *lista = NULL;
}
