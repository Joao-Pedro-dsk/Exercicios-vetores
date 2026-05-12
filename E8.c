#include <stdio.h>

int main(){

    int a[10], b[10], s[10];
    int n;

    printf("Numeros do primeiro vetor:\n");
    for(n=0; n<10; n++){

        scanf("%d", &a[n]);

    }

    printf("Numeros do segundo vetor:\n");
    for(n=0; n<10; n++){

        scanf("%d", &b[n]);

    }

    for(n=0; n<10; n++){

        s[n] = (a[n] + b[n]);

    }

    printf("A soma dos vetores eh:\n");
    for(n=0; n<10; n++){

        printf("%d\n", s[n]);

    }

}