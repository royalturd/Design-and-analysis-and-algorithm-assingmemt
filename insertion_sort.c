#include<stdio.h>
#include<conio.h>

#define MAX_SIZE 5

void insertion(int[]);

int main() {
    int arr_sort[MAX_SIZE], i;
    printf("\nEnter %d Elements for Sorting\n", MAX_SIZE);
    for (i = 0; i < MAX_SIZE; i++)
        scanf("%d", &arr_sort[i]);
    insertion(arr_sort);
    getch();
}

void insertion(int fn_arr[]) {
    int i, j, t;
    for (i = 1; i < MAX_SIZE; i++) {
        t = fn_arr[i];
        j = i - 1;

        while (j >= 0 && fn_arr[j] > t) {
            fn_arr[j + 1] = fn_arr[j];
            j = j - 1;
        }
        fn_arr[j + 1] = t;

    }

    printf("\n\nSorted Array :");
    for (i = 0; i < MAX_SIZE; i++) {
        printf("\t%d", fn_arr[i]);
    }
}