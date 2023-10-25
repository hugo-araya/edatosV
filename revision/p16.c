#include<stdio.h>
void fun(int x);
int main(){
    fun(5);
    return 0;
}

void fun(int x){
    if (x==1)
        return ;
    printf("%d", x);
    x = x -1;
    fun(x);
    printf("%d",x);
}