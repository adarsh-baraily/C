#include <stdio.h>
#include <string.h>

void salting(char pass[]);

int main() {
    
    char pass[50];
    scanf("%s", pass);


    salting(pass);

}

void salting(char pass[]) {

    char salt[] = "gets24";
    char newpass[50];
    strcpy(newpass, pass);
    strcat(newpass, salt);
    puts(newpass);
}