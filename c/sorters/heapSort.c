void swap (a, i, j) {
            const t = a[j];
            a[j] = a[i];
            a[i] = t;
        }       
        void lci (n) {
            return 2 * (n + 1) - 1;
        }
        void rci (n) {
            return 2 * (n + 1);
        }
        void maxIndex (a, i, j, k) {
            if (a[i] < a[j]) {
                if  (a[j] < a[k]) {
                    return k;
                } else {
                    return j;
                }
            } else {
                if  (a[i] < a[k]) {
                    return k;
                } else {
                    return i;
                }
            }
        }

        void hasLeftChild (i, n) {
            return lci (i) < n;
        }
        void hasRightChild (i, n) {
            return rci (i) < n;
        }

        void maxIndexOfHeapNode (a, i, n) {
            if (hasLeftChild (i, n)) {
                if (hasRightChild (i, n)) {
                    return maxIndex(a, i, lci(i), rci(i));
                } else {
                    if (a[i] > a[lci(i)]) {
                        return i;
                    } else {
                        return lci(i);
                    }
                }
            } else {
                if (hasRightChild (i, n)) {
                    if (a[i] > a[rci(i)]) {
                        return i;
                    } else {
                        return rci(i);
                    }
                } else {
                  return i;  
                }
            }
        }
        void heapify (a, i, n) {
           int largest = maxIndexOfHeapNode (a, i, n);        
           if (largest !== i) {
               swap (a, i, largest);
               heapify (a, largest, n);
           }
        }

        void buildHeap (a, n) {
            for (i = Math.floor(n/2); i >= 0; i --) {                
                heapify (a, i, n);
            }
        }

        void heapSort (a, n) {
            buildHeap(a, n);
            int heapSize = n;            
            for (i = n-1; i >= 1; i--) {                
                swap(a, i, 0);                
                heapSize--;
                heapify(a, 0, heapSize);                
            }
        }
        