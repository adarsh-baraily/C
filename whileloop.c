#include<stdio.h>
// while loop example
int main() {
    int num;
    printf("Enter a number for limit of the while loop: ");
    scanf("%d", &num);

    int i = 0;
    while (i <= num) {
        printf("this statement is printed until the condition is true \n");
        i++;
    }
    return 0;
}
