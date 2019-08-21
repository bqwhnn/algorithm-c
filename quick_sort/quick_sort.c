#include <stdio.h>

void quick_sort(int a[], int first, int last) {
    if (first < last) {
        int i, j = first, last;
        int x = a[first];

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
        printf("%d\n", i);
        quick_sort(a, first, i-1);
        quick_sort(a, i+1, last);
    }
}