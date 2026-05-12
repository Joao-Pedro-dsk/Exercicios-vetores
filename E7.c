#include <stdio.h>

int main(){

    int v[10];
    int n, x;

    for(n=0; n<10; n++){

        scanf("%d", &v[n]);

    }

    printf("numero para checar:");
    scanf("%d", &x);

    for(n=0; n<10; n++){

        if(x==v[n]){
            printf("O numero %d esta incluso no vetor.", x);
            continue;
        }

    }

    return 0;
}