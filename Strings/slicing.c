#include <stdio.h>

void slicing(char str[], int n, int m);

int main() {

    char str[50];
    printf("Enter your string : ");
    scanf("%s", str);

    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int m;
    printf("Enter the value of m : ");
    scanf("%d", &m);

    slicing(str, n, m);

    return 0;
}

void slicing(char str[], int n, int m) {
    char newstr[50];
    int j =0;
    for(int i = n; i <= m; i++, j++) {
        
        newstr[j] = str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}