#include <stdio.h>

int CountOdd(int arr[], int n);

int main() {

    int n;

    printf("Enter number of elements in an array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements :\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Number of odd integers in the array is/are : %d", CountOdd(arr, n));

    return 0;

}
int CountOdd(int arr[], int n) {
    int i;
    int c = 0;
    for (i = 0; i < n; i++) {
        if (i % 2 != 0) {
            c = c + 1;
        }
    }

    return c;
}