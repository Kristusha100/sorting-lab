function swap (a, i, j) {
    const t = a[j]
    a[j] = a[i]
    a[i] = t
}

function quickSort (a, l, r) {
    // console.log(a, l, r)
    let wall
    if (l < r) {
        wall = partition (a, l, r)
        // console.log('wall', wall)
        quickSort(a, l, wall - 1)
        quickSort(a, wall + 1, r)
    }
}

function partition (a, l, r) {
    let pivot = a[r]
    let wall = l - 1
    // console.log(a, l, r, 'pivot', pivot, 'wall', wall)

    for (let current = l; current < r; current++) {
        // console.log(current, a[current])
        if (a[current] >= pivot) {
            // console.log('current is larger, do nothing')
        }
        else {
            // console.log('current is smaller, moving the wall right')
            wall++
            swap(a, wall, current)
        }
    }

    wall++
    swap(a, wall, r) // place the pivot element into the right position
    
    // console.log('returning', wall)
    // console.log(a)
    
    return wall
}
