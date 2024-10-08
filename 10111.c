#include<stdio.h>

int main (){
    float a,b,c;
    printf("informe a distancia percorrida em km:");
    scanf("%f", &a) ;
    printf("informe o combustivel gasto em L:") ;
    scanf("%f", &b) ;
    c = a/b;
    printf("%2.2f",c) ;
    
}