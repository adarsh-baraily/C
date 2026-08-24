#include <stdio.h>

void work(int a, int b, int *sum, int *prod,  double *avg);

int main() {

    int a, b;
    int sum, prod;
    double avg;

    printf("Enter an integer value for a : ");
    scanf("%d", &a);

    printf("Enter an integer value for b : ");
    scanf("%d", &b);

    work(a, b, &sum, &prod, &avg);
    printf("The avg of your input number is : %f", avg);

    return 0;


}
void work(int a, int b, int *sum, int *prod, double *avg) {

    *sum = a + b;
    *prod = a * b;
    *avg = (a + b)/2.0;

}

