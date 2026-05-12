#include <stdio.h>

int main(){

    int v[10];
    int n, p=0, neg=0, z=0;

    for(n=0; n<10; n++){
        scanf("%d", &v[n]);
    }

    for(n=0; n<10; n++){

        if(v[n] == 0){
            z++;
        }
        else if(v[n] > 0){
            p++;
        }else{
            neg++;
        }
    }

    printf("Positivos: %d\n", p);
    printf("Negativos: %d\n", neg);
    printf("Zeros: %d", z);

    return 0;
}