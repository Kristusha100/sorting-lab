void insertionSort(int *a, int n) {
    for ( int j = 1; j< n; j ++) {
        int elementToInsert = a[j];        
        int i;
        for (i = j - 1; i >= 0 && a[i] > elementToInsert; i --) {
            a[i + 1] = a[i];
        }       
        a[i + 1] = elementToInsert;
    }
}
 