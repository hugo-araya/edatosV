#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "PILA.h"

int main(){
    PILA *tope1;
    int valores[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int pintas[4];
    int i;
    int n, m, cambiar1, cambiar2, aux;
    srand(time(0));
    crear(&tope1);
    for (i = 0; i < 10; i++){
        cambiar1 = rand()%12;
        cambiar2 = rand()%12;
        aux = valores[cambiar1];
        valores[cambiar1] = valores[cambiar2];
        valores[cambiar2] = aux;
    }
    i = 0;
    while(i < 12){
        // 1 representa a corazones
        push(tope1, valores[i], 1);
        i = i + 1;
    }
    pop(tope1, &n, &m);
    printf("%d %d\n", n, m);
    return 0;
}
