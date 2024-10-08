#include<stdio.h>

int main (){
    float a,b,c;
    printf("informe seu peso:");
    scanf("%f", &a) ;
    printf("altura:") ;
    scanf("%f", &b) ;
    c = a/ (b*b) ;
    printf("%2.2f",c) ;
}