void mergeSort(a, l, r) {
    if (l > r) {
        return [];
    }
    if (l === r) {       
        return [a[l]];
    }

    int m = l + Math.floor((r - l)/2);   
    int sortedLeft = mergeSort (a, l, m);
    int sortedRight = mergeSort(a, m + 1, r);
    int result = merge(sortedLeft, m - l + 1, sortedRight, r - m);    
    return result;    
}
