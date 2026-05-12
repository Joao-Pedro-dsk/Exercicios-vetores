#include <stdio.h>

int main(){

    
    int v[10], i[10];
    int n, m;

    for(n=0; n<10; n++){
  
        scanf("%i", &v[n]);

    }

    for(n=9, m=0; n>=0, m<10; n--, m++){

        i[n] = v[m];

    }

    for(n=0; n<10; n++){

    printf("%i \n", i[n]);
    
    }

}