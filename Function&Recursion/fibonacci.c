#include <stdio.h>
// recursion definition
int fib(int n);
// recursion calling statemet
int main() {

    int n;

    printf("Enter the number whose fibonacci series you want to print : ");
    scanf("%d", &n);

    printf("The fibonacci seies of your input number is : %d\n", fib(n));

    return 0;

}
// recursion declaration
int fib(int n) {

    if ( n == 0) {
        return 0;
    } else if ( n == 1) {
        return 1;
    }
    
    int fibnm1 = fib(n-1);
    int fibnm2 = fib(n-2);
    int fibn = fibnm2 + fibnm1;
    return fibn;
}
