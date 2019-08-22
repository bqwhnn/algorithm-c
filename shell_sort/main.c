#include <stdio.h>
#include "shell_sort.h"

int main(int args, char *argv[]) {
    int a[10] = {51, 32, 45, 2, 34, 49, 77, 10, 1, 34};
    shell_sort(a, 10);
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}