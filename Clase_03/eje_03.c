#include <stdio.h>

int main(){
    /* utiliza la lista para inicializar el arreglo n */
    int n[ 10 ] = { 32, 70, 64, 18, 95, 64, 90, 70, 60, 70 }; 
    int i, ok, j; /* subindice */
    printf( "Elemento Valor\n" );
    /* muestra el contenido del arreglo en forma tabular 
    for ( i = 0; i < 10; i++ ) {
        printf( "%5d%13d\n", i, n[ i ] ); 
    }
    */
    for(i=0; i < 10; i++){
        ok = 0;
        for(j=0; j <10; j++){
            if (i != j){
                if (n[i] == n[j]){
                    ok = 1;
                }
            }
        }
        if (ok == 0){
            printf("%d\n", n[i]);
        }
    }
    return 0; 
}
