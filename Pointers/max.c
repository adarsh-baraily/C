#include <stdio.h>

int main() {

    int n ;
    int *ptr = &n;

    printf("Enter your first number : ");
    scanf("%d", &n);

    int m;
    int *str = &m;

    printf("Enter your second number : ");
    scanf("%d", &m);

    if (*ptr > *str) {
        printf("Max is : %d", *ptr);
    } else {
        printf("Max is : %d", *str);
    }

    return 0;

}


