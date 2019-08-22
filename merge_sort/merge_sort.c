#include <stdlib.h>
#include "merge_sort.h"

void merge_sort(int a[], int t[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        merge_sort(a, t, low, mid);
        merge_sort(a, t, mid+1, high);
        merge(a, t, low, mid, high);
    }
}

void merge(int a[], int t[], int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= high) {
        if (a[i] < a[j])
            t[k++] = a[i++];
        else
            t[k++] = a[j++];
            
    }

    while (i <= mid)
        t[k++] = a[i++];
    
    while (j <= high)
        t[k++] = a[j++];

    for (i = low, k = 0; i <= high; i++, k++) {
        a[i] = t[k];
    }
}