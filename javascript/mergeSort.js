function mergeSort (a, l, r) {
    // console.log('calling mergeSort', a, l, r)
    if (l > r) {
        return []
    }
    if (l === r) {       
        return [a[l]]
    }

    let m = l + Math.floor((r - l) / 2)   
    let sortedLeft = mergeSort(a, l, m)
    let sortedRight = mergeSort(a, m + 1, r)
    let result = merge(sortedLeft, m - l + 1, sortedRight, r - m)
    // console.log(sortedLeft, sortedRight, result)    
    return result    
}

function merge(a1, n1, a2, n2) {
    // console.log('calling merge', a1, n1, a2, n2)
    let result = new Array(n1 + n2)
    let i = 0, j = 0, k = 0
    while (k < n1 + n2){
        // console.log(i, a1.join(','), a1[i], j, a2.join(','), a2[j], k, result.join(','))
        if (j >= n2 || a1[i] < a2[j]){
            result [k] = a1[i]
            i++
        }
        else {
            result [k] = a2[j]
            j++
        }
        k++
    }
    // console.log('merge result is', result)
    return result
}