#include <stdio.h>

int main(){
    int numero;
    scanf("%d",&numero);

    if (numero % 2 == 0){
        printf("%d e par!\n",numero);
    } else {
        printf("%d e impar!\n",numero);
    }
}