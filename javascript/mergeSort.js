function mergeSort(a, l, r) {
    if (l > r) {
        return []
    }
    if (l === r) {       
        return [a[l]]
    }

    let m = l + Math.floor((r - l)/2)   
    let sortedLeft = mergeSort (a, l, m)
    let sortedRight = mergeSort(a, m + 1, r)
    let result = merge(sortedLeft, m - l + 1, sortedRight, r - m)    
    return result    
}
