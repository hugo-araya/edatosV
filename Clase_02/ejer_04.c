#include<stdio.h>
int main(){
    int n,a=0,b=1,c=1;
    printf("Hasta que posición deseas ver? "); 
    scanf("%d",&n);
    if(n==1)
        printf("%10d\n",a);
    else
        if(n==2){
            printf("%10d\n",a);
            printf("%10d\n",b);
        }
        else{ 
            c=2;
            printf("%10d\n",a);
            printf("%10d\n",b);
            while(c<n){
                a+=b;
                printf("%10d\n",a);
                c++;
                if(c==n)
                    break; 
                else{
                    b+=a;
                    printf("%10d\n",b);
                    c++; 
                }
            }
        }
    return 0; 
}
