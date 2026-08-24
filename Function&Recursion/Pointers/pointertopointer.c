#include <stdio.h>

int main() {
    
    int n = 7;
    int *ptr = &n;
    int **pptr = &ptr;

    printf("%d", **pptr);
        
}
