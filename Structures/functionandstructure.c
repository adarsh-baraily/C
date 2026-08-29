#include <stdio.h>
#include <string.h>

struct student {

    char name[50];
    int roll;
    float cgpa;

};

void information(struct student s1);

int main() {

    struct student s1 = {"Adarsh", 20, 8.5};
    information(s1);

    return 0;

}

void information(struct student s1) {
    
    printf("Student's name is : %s\n", s1.name);
    printf("Student's roll number is : %d\n", s1.roll);
    printf("Student's cgpa is : %f\n", s1.cgpa);

}
