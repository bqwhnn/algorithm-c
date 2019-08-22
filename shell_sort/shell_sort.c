#include "shell_sort.h"

void shell_sort(int a[], int n) {
    int gap, i, j, temp;
    
    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && a[j] > a[j+gap]; j -= gap) {
                temp = a[j];
                a[j] = a[j+gap];
                a[j+gap] = temp;
            }
}