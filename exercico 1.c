#include<stdio.h>
int main(){
    float a, b, c, d, media;
    printf("notas");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    media = (a+b+c+d)/4;
    printf("sua nota e%.2f\n", media);
    if(media >= 4 && media < 7 ){
        printf("voce esta de prova final");
        }
        if(media <4){
            printf("voce esta reprovado boa sorte ano que vem");
        }
        if(media> 7){
            printf("voce passou paraabens");
}
}