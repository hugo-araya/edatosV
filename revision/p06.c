#include<stdio.h>
int fun(int x, int *p); 

int main(){
    int n=10, m=20;
    printf("%d %d %d", fun(n, &m), n, m); 
}

int fun(int x, int *p){
    x = x + 1;
    *p = *p + 1;
    return x; 
}