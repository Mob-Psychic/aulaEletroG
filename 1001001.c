#include<stdio.h>

int main (){
    float a,b,c,y;
    printf("informe o tamanho do arquivo:");
    scanf("%f", &a) ;
    printf("informe a velocidade da conexão em bits por segundo:");
    scanf("%f", &y) ;
    c = a/y ;
    printf("%2.2f",c) ;
}