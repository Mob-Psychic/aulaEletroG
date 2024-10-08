#include<stdio.h>

int main (){
    float a,b,c,y;
    printf("informe o comprimento da sala:");
    scanf("%f", &a) ;
    printf("informe a largura da sala:");
    scanf("%f", &y) ;
    printf("informe o preço do carpete") ;
    scanf("%f", &b) ;
    c = b*(a*y) ;
    printf("%2.2f",c) ;
}