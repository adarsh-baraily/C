#include <stdio.h>

float faren(float celcius);

int main() {
    
    float celcius;
    printf("Enter the temperature in celcius: ");
    scanf("%f", &celcius);
    
    printf("The value of your temperature in farenhiet scale is : %f", faren(celcius));

    return 0;
}

float faren(float celcius) {
    float faren = (celcius * 9/5) + 32;
    return faren;
}
