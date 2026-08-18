#include<stdio.h>
#include<math.h>

int main() {
    int n;

    printf("Enter a number of your choice:");
    scanf("%d", &n);

    if(n>=1) {
        printf("It is a natural number");
    } else {
        printf("Not a natural number");
    }
    return 0;
}

