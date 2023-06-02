#include<stdio.h>
#include "lista.h"

int main(){
    LISTA *L;
    crear(&L);
    agregar(&L, 3);
    agregar(&L, 4);
    recorrer(&L);
    return 0;
}