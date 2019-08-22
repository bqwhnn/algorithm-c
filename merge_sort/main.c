#include <stdio.h>
#include <stdlib.h>
#include "merge_sort.h"

int main(int agrc, char *argv[]) {
    int a[10] = {51, 32, 45, 2, 34, 49, 77, 10, 1, 34};
    int *t = (int*)malloc(10 * sizeof(int));
    merge_sort(a, t, 0, 9);
    free(t);
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}