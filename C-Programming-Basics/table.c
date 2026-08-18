#include<stdio.h>
// program for table creation
int main() {

    int n;
    printf("Enter the number whose table you want to print: ");
    scanf("%d", &n);

    int i;
    for(i = 1; i<11; i=i+1) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}
