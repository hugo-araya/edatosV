#include <stdlib.h>

struct tpila{
  int dato;
  int pinta;
  struct tpila *sig;
};

typedef struct tpila PILA;

void crear(PILA **pila);
int vacia(PILA *pila);
void push(PILA *pila, int elem, int pinta);
void pop(PILA *pila, int *elem, int *pinta);

void crear(PILA **pila){
    *pila = (PILA *) malloc(sizeof(PILA)); 
    (*pila)->sig = NULL;
}

int vacia(PILA *pila){
  return (pila->sig == NULL);
}

void push(PILA *pila, int elem, int pinta){
    PILA *nuevo;
    nuevo = (PILA *) malloc(sizeof(PILA)); 
    nuevo->dato = elem;
    nuevo->pinta = pinta;
    nuevo->sig = pila->sig;
    pila->sig = nuevo;
}

void pop(PILA *pila, int *elem, int *pinta){
  PILA *aux;
  aux = pila->sig;
  *elem = aux->dato;
  *pinta = aux->dato;
  pila->sig = aux->sig;
  free(aux);
}
