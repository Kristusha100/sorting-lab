#include <stdio.h>

void printArray (int *a, int n) {
    printf("[ ");
    for (int j = 0; j < n; j ++) {
        printf("%d", a[j]);
        if (j != n - 1) {
            printf(", ");
        }        
    }
    printf(" ]\n");
}
