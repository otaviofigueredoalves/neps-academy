#include <stdio.h>

int main(){
    float n1;
    float n2;
    float media;
    scanf("%f%f",&n1,&n2);
    media = (n1*2 + n2*3)/5;

    if (media >= 7 && media <= 10){
        printf("Aprovado");
    } else if(media < 7 && media < 3){
        printf("Reprovado");
    } else {
        printf("Final");
    }
}
