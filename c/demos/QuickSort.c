#include <stdio.h>
#include "../utils/printArray.h"
#include "../sorters/QuickSort.h"

int main () {
    int a[] = { 9, 234, 12, 333, 21, 8 };
    const int n = 6;
    printf("Array's length is %d\n", n);
    printf("Before sorting:\n");
    printArray(a, n);
    QuickSort(a, n);
    printf("After sorting:\n");
    printArray(a, n);
    return 0;
}
