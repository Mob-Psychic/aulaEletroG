#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,d;
    printf("digite o capital aplicado");
    scanf("%f", &a);
    printf("digite a taxa de juros");
    scanf("%f",&b);
    printf("digite o periodo de aplicação");
    scanf("%f", &c);
    d = a*pow((1+b/100),c);
    printf("%f", d);
    }
