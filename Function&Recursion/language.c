#include <stdio.h>
// function definition statements
void spanish();
void french();
void sorry();
// function calling statements
int main() {
    char ch;
    printf("Enter your nationality by choosing 's' for Spanish and 'f' for French : ");
    scanf("%c", &ch);

    if (ch == 's') {
        spanish();
    } else if (ch == 'f') {
        french();
    } else {
        sorry();
    }
    return 0;
}
// function declaration statements
void spanish() {
    printf("Hola !");
}
void french() {
    printf("Bonjour !");
}
void sorry() {
    printf("Sorry , nationality curretly unavailable !");
}



