#include <stdio.h>
#include "cola.h"

int main(){
    COLA *cola, *cola1;
    int elem;
    crear(&cola);
    crear(&cola1);

    if (vacia(cola)){
        printf("La cola Inicial esta vacia.\n");
    }
    encolar(&cola, 3);
    encolar(&cola, 4);
    encolar(&cola, 5);
    encolar(&cola, 6);
    printf("\nMostrando cola inicial\n");
    while (!vacia(cola)){
        desencolar(&cola, &elem);
        printf("Elemento desencolado: %d\n", elem);    
        if ((elem %2) == 0){
            encolar(&cola1, elem);
        }    
    }
    printf("\nMostrando cola secundaria\n");
    while (!vacia(cola1)){
        desencolar(&cola1, &elem);
        printf("Elemento desencolado: %d\n", elem);       
    }
    if (vacia(cola)){
        printf("La cola Inicial esta vacia.\n");
    }
    if (vacia(cola1)){
        printf("La cola Secundaria esta vacia.\n");
    }
    return 0;
}