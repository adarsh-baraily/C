#include <stdio.h>//preprocessor directive to include standard input-output header file

int main() {
    int n;//variable declaration
    printf("Enter a number: ");
    scanf("%d", &n);//taking input from user
    
    int cube = n * n * n;//calaculating the cube of the given number
    printf("The cube of your given number is: %d\n", cube);

    return 0;//returning 0 to indicate successful execution of the program
}