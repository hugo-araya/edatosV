#include <stdlib.h>
#ifndef _STIOH_
#define _STIOH_
#include <stdio.h>
#endif
struct lista{
    int clave;
    struct lista *sig;
};

void crea_lista(struct lista **L);
void add_inicio(struct lista **L, int elem);
void recorre(struct lista **L);
void add_final(struct lista **L, int elem);
void del_inicio(struct lista **L);
void del_final(struct lista **L);

void crea_lista(struct lista **L){
    *L = (struct lista *) malloc(sizeof(struct lista)); 
    *L = NULL;
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
    while (p != NULL) {
        printf("%d, ", p->clave);
        p = p->sig;
    }
    printf("\n");
}

void add_final(struct lista **L, int elem){
    struct lista *p;
    struct lista *q;
    p = *L;
    while (p->sig != NULL) {
        p = p->sig;
    } 
    q = (struct lista *) malloc(sizeof(struct lista));
    q->clave = elem;
    q->sig = NULL;
    p->sig = q;
}

void del_inicio(struct lista **L){

}

void del_final(struct lista **L){

}