#include "merge_sort.h"

int t[100];

void merge_sort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low+high) / 2;

        merge_sort(a, low, mid);
        merge_sort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}

void merge(int a[], int low, int mid, int high) {
    int i, j, k;
    i = low;
    j = mid+1;
    k = 0;

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

    for (i = low, k = 0; i <= high; i++, k++)
        a[i] = t[k];
}