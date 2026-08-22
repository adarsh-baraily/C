#include <stdio.h>

int fact(int n);

int main() {

    int n;
    printf("Enter the number whose factorial you want to be printed: ");
    scanf("%d", &n);

    printf("Factorial of your input number is : %d", fact(n));
    
    return 0;
}

int fact(int n) {
    if (n == 1) {
        return 1;
    }
    int factnm1 = fact(n-1);
    int factn = fact(n-1) * n;
    return factn;
}