#include <stdio.h>

float Rectangle(float a, float b);
float Circle(float r);
float Square(float side);

int main() {

    float a = 2.0;
    float b = 6.0;
    float r = 4.0;
    float side = 5.0;

    printf("Area of Reactangle is : %f\n", Rectangle(a, b));
    printf("Area of Circle is: %f\n", Circle(r));
    printf("Area of Square is : %f\n", Square(side));
    
    return 0;


}

float Rectangle(float a, float b) {
    return a * b;
}
float Circle(float r) {
    return 3.14 * r * r;
}
float Square(float side) {
    return side * side;
}