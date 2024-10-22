#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("digite os dois primeiros numeros do ano de seu nascimento");
    scanf("%d", &a);
    printf("agora digite os outros dois numeros do seu nascimento");
    scanf("%d", &b);
    c = (a + b) / 5;
    d = (a + b) - (5 * c);
    if(d == 0) {
        printf("voce e timido");
        return 0;
    }
     if(d == 1) {
        printf("voce e sonhador");
        return 0;
    }
     if(d == 2) {
        printf("voce e paquerador");
        return 0;
    }
     if(d == 3) {
        printf("voce e atraente");
        return 0;
    }
     if(d == 4) {
        printf("voce e irressitivel");
        return 0;
    }

}
