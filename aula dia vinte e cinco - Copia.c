#include <stdio.h> 
int main() { 
 int a, c; 
 float b, d, e; 
 printf("numero de velhos "); 
 scanf("%d",&a); 
 b = 0; 
 for(c=1; c<=a; c++) { 
 printf("%da. idade ", c); 
 scanf("%f",&d); 
 b = b + d; 
 } 
 e = b / a; 
 printf("media das idades = %.1f\n", e); 
 return 0;
}