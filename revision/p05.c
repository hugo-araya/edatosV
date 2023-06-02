#include<stdio.h>
int f1(int *a);
void f2(int *a, int b);

int main(){
    int a = 2, b = 2;
    f2(&a, b); 
    printf("%d, %d",a, b); 
    return 0;
}

int f1(int *a){
    *a= *a * *a;
    return *a; 
}

void f2(int *a, int b){
    b = f1(a) * f1(&b);
}