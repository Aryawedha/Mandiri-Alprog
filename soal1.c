#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

    void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int nilai[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nilai[i]);
    }
    bubbleSort(nilai, n);
    for (int i = 0; i < n; i++) {
        printf("%d\n", nilai[i]);
    }

    return 0;
}
