#include <stdio.h>//preprocessor directive to include standard input-output header file

int main() {
    int a, b;//declaring two integer variables a and b to store the length and breadth of the rectangle

    printf("Enter a:");
    sacnf("%d", &a);//taking input for a 

    printf("Enter b:");
    scanf("%d", &b);//taking input for b

    int perimeter = 2 * (a + b);//calculation the perimeter
    printf("Perimeter of the rectangle is: %d\n", perimeter);

    return 0;//denoting 0 error code to indicate successful execution of the program

}