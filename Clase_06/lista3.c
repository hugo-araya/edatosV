#ifndef _STIOH_
#define _STIOH_
#include <stdio.h>
#endif
#include "LISTA.h"

int main(){
    struct lista *L;
    struct lista *P;
    crea_lista(&L); 
    crea_lista(&P);
    add_inicio(&L, 100);
    add_inicio(&P, 124);
    recorre(&L);
    recorre(&P);
    add_final(&L, 20);
    add_final(&P, 567);
    recorre(&L);
    recorre(&P);
    return 0;
}
