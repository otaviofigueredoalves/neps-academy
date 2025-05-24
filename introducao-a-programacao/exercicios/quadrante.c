#include <stdio.h>

int main(){
    int xAbs;
    int yOrd;

    scanf("%d%d",&xAbs,&yOrd);

    if (xAbs > 0 && yOrd > 0){
        printf("Q1");
    } else if(xAbs < 0 && yOrd > 0){
        printf("Q2");
    } else if(xAbs < 0 && yOrd < 0){
        printf("Q3");
    } else if(xAbs > 0 && yOrd < 0){
        printf("Q4");
    } else {
        printf("eixos");
    }
}