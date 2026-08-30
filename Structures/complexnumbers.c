#include <stdio.h>

struct complex {

    int real;
    int img;

};

int main() {

    struct complex c = {5, 6};
    struct complex *ptr = &c;

    printf("The real part is : %d\n", ptr->real);
    printf("The imaginary part is : %d\n", ptr->img);

    return 0;

}