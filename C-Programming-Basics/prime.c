#include <stdio.h>

int main() {

    int n,i;

    printf("Enter a number of your choice :");
    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        if ( n % i == 0) {
            break;
        }
    }
    if(i == n) {
        printf("This is a prime number");
    } else {
        printf("This is not a prime number");
    }

    return 0;
    
}