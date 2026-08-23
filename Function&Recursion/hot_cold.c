#include <stdio.h>

float temp(float t);

int main() {

    float t;
    printf("Enter the temperature : ");
    scanf("%f", &t);

    temp(t);

    return 0;

}

float temp(float t) {

    if(t >= 30) {
        printf("hot");
    } else if(t <= 30 && t >= 20) {
        printf("Sustainable temperature");
    } else if (t < 20) {
        printf("Cold");
    }

}