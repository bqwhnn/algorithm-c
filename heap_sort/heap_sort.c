#include "heap_sort.h"

void heap_sort(int a[], int n) {
    // make max heap
    int i, temp;
    for (i = n/2; i >= 0; i--)
        fix_down(a, i, n);
    
    // sort
    for (i = n-1; i >= 0; i--) {
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        fix_down(a, 0, i);
    }
}

void fix_down(int a[], int x, int n) {
    int i, j, temp;
    i = x;
    j = 2 * i + 1;

    while (j < n) {
        if (j+1 < n && a[j] < a[j+1])
            j++;
        
        if (a[i] > a[j])
            break;

        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i = j;
        j = 2 * i + 1;
    }
}