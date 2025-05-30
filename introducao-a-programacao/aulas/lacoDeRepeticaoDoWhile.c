#include <stdio.h>

int main(){
    int n;

    do{
        printf("Digite uma senha: ");
        scanf("%d",&n);
    } while(n!=2025);
    printf("ACERTOU!");
}