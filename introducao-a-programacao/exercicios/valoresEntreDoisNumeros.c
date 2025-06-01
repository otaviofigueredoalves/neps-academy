#include <stdio.h>

int main(){
    // Faça um programa para ler dois valores inteiros A e B, e imprima todos os valores inteiros entre os números lidos em ordem crescente. Por exemplo, ao receber os valores 2 e 5, devem ser impressos os valores 2, 3, 4 e 5. Caso receba os valores 4 e -1, devem ser impressos os valores -1, 0, 1, 2, 3 e 4.

    int a;
    int b;
    int i;

    scanf("%d",&a);
    scanf("%d",&b);

    if(a > b){
        for(i = b; i <= a; i++){
            printf("%d ",i);
        }
    } else if(b > a){
        for(i = a; i <= b; i++){
            printf("%d ",i);
        }
    } else {
        printf("%d %d",a,b);
    }
}