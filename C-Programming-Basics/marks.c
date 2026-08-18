#include<stdio.h>
#include<math.h>

int main() {
    int marks;

    printf("Enter your marks(0-100): ");
    scanf("%d", &marks);

    if (marks < 30 && marks >= 0) {
        printf("Grade is C \n");
    } else if (marks >= 30 && marks < 70) {
        printf("Grade is B \n");
    } else if (marks >= 70 && marks < 90) {
        printf("Grade is A \n");
    } else if (marks >= 90 && marks <= 100) {
        printf("Grade is A+ \n");
    } else {
        printf("Invalid marks entered \n");
    }

    return 0;
}
