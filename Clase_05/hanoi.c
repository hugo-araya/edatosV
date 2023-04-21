#include<stdio.h>

void hanoi(int n,int com, int aux, int fin);

int main(){
    hanoi(4, 1, 2, 3);
    printf("\n");
    return 0;
}

void hanoi(int n,int com, int aux, int fin){
  if(n==1)
      printf("%d -> %d",com,fin);
  else{
      hanoi(n-1,com,fin,aux);
      printf("\n%d -> %d\n",com,fin);
      hanoi(n-1,aux,com,fin);
    } 
}