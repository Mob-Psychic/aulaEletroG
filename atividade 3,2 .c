#include<stdio.h>
int main() {
    int a, b, d;
    printf("informe a quantidade de pecas totais");
    scanf("%d", &a);
    printf("informe a quantidade de pecas defeituosas");
    scanf("%d", &b);
    d = a * 10/100;
    if(b >= d ){
        printf("a maquina precisa de manutecao\n");
        return 0;
    }
        printf("a maquina nao precisa de manutencao\n");
    return 0;
}