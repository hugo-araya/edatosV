#include<stdio.h>
void fun(double s1, double *s2);

int main(){
    double a, b;
    scanf("%lf %lf", &a, &b); 
    fun(a, &b);
    printf("%.1lf, %.1lf\n", a, b); 
    return 0;
}

void fun( double s1, double *s2) { 
    double x = s1 - *s2;
    s1 = s1 + *s2;
    *s2 = x; 
}