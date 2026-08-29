#include <stdio.h>
#include <string.h>

char vowels(char str[]);

int main() {

    char str[50];
    printf("Enter the string in small case : ");
    fgets(str, 50, stdin);

    printf("The number of vowels in your string is/are : %d", vowels(str));


    return 0;
       

}

char vowels(char str[]) {

    int c = 0;
    int i = 0;
    for(i = 0; i <= strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            c = c + 1;
        }
    }

    return c;

}