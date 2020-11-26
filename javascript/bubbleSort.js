function bubbleSort (a, n) {
    for (let i = n -1; i > 0; i --) {
        for (let j = 0; j< n - 1; j ++) {
            if (a[j] > a[j+1]) {
                let t = a[j]
                a[j] = a[j+1]
                a[j+1] = t
            }
        }
    }   
}
