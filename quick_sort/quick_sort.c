#include "quick_sort.h"

void quick_sort(int a[], int low, int high) {
    if (low < high) {
        int i, j, x;
        i = low;
        j = high;
        x = a[low];

        while (i < j) {
            while (i < j && a[j] >= x)
                j--;
            if (i < j)
                a[i++] = a[j];
            while (i < j && a[i] < x)
                i++;
            if (i < j)
                a[j--] = a[i];
        }
        a[i] = x;
        quick_sort(a, low, i-1);
        quick_sort(a, i+1, high);
    }
}