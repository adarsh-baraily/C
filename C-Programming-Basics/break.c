#include<stdio.h>

int main() {

    int n;
    do {
        printf("Enter a number :");
        scanf("%d", &n);

        if( n % 2 != 0) {
            break;
        }
    } while (n>0);
    printf("Code ended");
    return 0;
}
    