#include <stdio.h>

int main() {
    float arr[3];
    printf("Enter all the prices : ");
    scanf("%f", &arr[0]);
    scanf("%f", &arr[1]);
    scanf("%f", &arr[2]);
    scanf("%f", &arr[3]);

    printf("Final price 1 post gst is : %f\n", arr[0] + (0.18 * arr[0]) );
    printf("Final price 2 post gst is : %f\n", arr[1] + (0.18 * arr[1]) );
    printf("Final price 3 post gst is : %f\n", arr[2] + (0.18 * arr[2]) );
    printf("Final price 4 post gst is : %f\n", arr[3] + (0.18 * arr[3]) );

    return 0;

}