#include <stdio.h>

int reverse(int arr[], int n);

int main() {

    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements : ");

    for ( int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverse(arr, n);

    printf("The reversed array is : ");
    for( int i = 0; i < n; i = i + 1) {
        printf("%d\t", arr[i]);
    }


    return 0;

}

int reverse(int arr[], int n) {

    for ( int i = 0; i < (n/2); i = i + 1) {
        int firstvalue = arr[i];
        int secondvalue = arr[n-i-1];
        arr[n-i-1] = firstvalue;
        arr[i] = secondvalue;
    }

}