#include <stdio.h>
#include <math.h>

double sqrt(double n);

int main() {
    
    double n;

    printf("Enter the number whose square root valued is desired : ");
    scanf("%lf", &n);

    printf("Value of square root is : %lf\n", sqrt(n));

    return 0;
}

double sqrt(double n) {

    if( n < 0) {
        return 0;
    }
    double ans = pow(n,1.0/2.0);
    return ans;
}