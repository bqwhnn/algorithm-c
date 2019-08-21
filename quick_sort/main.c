#include <stdio.h>
#include "quick_sort.h"

int main(void) {
    int a[10] = {51, 32, 45, 2, 34, 49, 77, 10, 1, 34};
    quick_sort(a, 0, 9);
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}