#include <stdio.h>

int main(){
    // Bino está aprendendo a multiplicar números e gostaria da sua ajudar para apresentar a tabuada de um determinado valor inteiro X. A entrada consiste em uma única linha contendo o valor inteiro XX. A saída consiste de 10 linhas. A i-éssima linha constem a mensagem "x * i = valor", onde x é o valor de XX, ii representa a o identificar da linha e o valorvalor é o valor da múltiplicação de X∗iX∗i
    int x;
    int i;
    int operacao;
    scanf("%d",&x);
    for(i = 1; i <= 10; i++){
        operacao = x * i;
        printf("%d * %d = %d\n",x,i,operacao );
    }
}