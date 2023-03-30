#include <stdio.h> 
int main(){
    int multiplo=0,cont=0; 
    while (multiplo<40){
        multiplo=cont*2; 
        printf("%10d\n", multiplo); 
        cont++;
    }
    return(0); 
}