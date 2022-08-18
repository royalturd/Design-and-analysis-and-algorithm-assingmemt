#include<stdio.h>


#define MAX_SIZE 5

int main() {
    int arr_sort[MAX_SIZE], i, j, t, p;
    printf("\nEnter %d Elements\n", MAX_SIZE);
    for (i = 0; i < MAX_SIZE; i++)
        scanf("%d", &arr_sort[i]);

    for (i = 0; i < MAX_SIZE; i++) {
        p = i;
        for (j = i; j < MAX_SIZE; j++) {
            if (arr_sort[p] > arr_sort[j])
                p = j;
        }

        if (p != 1) {
            t = arr_sort[i];
            arr_sort[i] = arr_sort[p];
            arr_sort[p] = t;
        }
    }

    printf("\n\nSorted Array :");
    for (i = 0; i < MAX_SIZE; i++) {
        printf("\t%d", arr_sort[i]);
    }
}