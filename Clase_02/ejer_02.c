#include <stdio.h>
int main(){
    int n;
    printf(" numero\t exp2\t exp3\t exp4\n"); 
    printf("------\t-----\t-----\t-----\n"); 
    for (n=0; n<=10; ++n)
        printf("%2d\t%5d\t%5d\t%5d\n",n,n*n,n*n*n,n*n*n*n); 
    return 0;
}