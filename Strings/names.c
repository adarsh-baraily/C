#include <stdio.h>

void names(char arr[]);

int main() {

    char Firstname[] = "Adarsh";
    char Lastname[] = "Baraily";

    names(Firstname);
    names(Lastname);

    return 0;

}

void names(char arr[]) {

    for(int i = 0; arr[i] != '\0'; i++) {

        printf("%c", arr[i]);
     
    }

    printf("\n");
}

