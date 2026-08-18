#include<stdio.h>
#include<math.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%d \n", x % 2 == 0); // even is 1 and odd is 0
    return 0;
}