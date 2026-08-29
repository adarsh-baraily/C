#include <stdio.h>
#include <string.h>

struct student {

    char name[50];
    int roll;
    float cgpa;

};

int main() {

    struct student s1;
    s1.roll = 20;
    s1.cgpa = 8.5;
    strcpy(s1.name, "Adarsh");

    printf("Student name is : %s\n", s1.name);
    printf("Student roll number is : %d\n", s1.roll);
    printf("Student's cgpa is : %f\n", s1.cgpa);

    return 0;


}
    


