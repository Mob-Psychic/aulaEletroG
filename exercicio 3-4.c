#include <stdio.h>
int main(){
   int a, b, c;
   printf("informe os tres valores do triangulo\n");
   scanf("%d", &a);
   scanf("%d", &b);
   scanf("%d", &c);

   if (a == b && b == c && a == c) {
      printf("O triangulo eh equilatero!"); 
   }
   if (a == b || b == c a == ) {
   printf("triangulo isoseles");

   }
   if (a != b && b != c){
      printf("triangulo escaleno");
   }
}