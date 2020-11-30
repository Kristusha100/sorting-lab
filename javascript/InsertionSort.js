function insertionSort(a, n) {
    for ( let j = 1; j< n; j ++) {
        let elementToInsert = a[j]        
        let i
        for (i = j - 1; i >= 0 && a[i] > elementToInsert; i --) {
            a[i + 1] = a[i]
        }       
        a[i + 1] = elementToInsert
    }
}
 