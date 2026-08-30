#include <stdio.h>

int main() {


    FILE *fptr;
    fptr = fopen("Student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter student's name : ");
    scanf("%s", name);

    printf("Enter student's age : ");
    scanf("%d", &age);

    printf("Enter student's cgpa : ");
    scanf("%f", &cgpa);

    fprintf(fptr, "%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%f\t", cgpa);

    fclose(fptr);

    return 0;



}