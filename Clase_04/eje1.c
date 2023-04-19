 #include <stdio.h>

 int main(){
    int A = 1, B = 2, C = 3, *P1, *P2;
    P1 = &A;
    P2 = &C;
    *P1 = (*P2)++;
    P1 = P2;
    P2 = &B;
    *P1 -= *P2;
    ++*P2;
    *P1 *= *P2;
    A = ++*P2 * *P1;
    P1 = &A;
    *P2 = *P1 /= *P2;
    printf("A = %d - B = %d - C = %d - *P1 = %d - *P2 = %d\n", A,B,C,*P1,*P2);
    printf("A = %p - B = %p - C = %p - P1 = %p - P2 = %p\n", &A,&B,&C,P1,P2);
    return 0;
 }