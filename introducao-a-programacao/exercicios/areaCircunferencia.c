#include <stdio.h>

int main() {
    float r,area,pi;
    pi = 3.1416;
    scanf("%f",&r);
    area = pi * (r*r);
    printf("%.2f",area);
    return 0;
}