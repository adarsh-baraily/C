#include <stdio.h>

int count(char arr[]);

int main() {

    char Fullname[50];
    fgets(Fullname, 50, stdin);
    printf("Length of string is : %d", count(Fullname));
    return 0;

}

int count(char arr[]) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    return count-1;
}