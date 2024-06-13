#include <stdio.h>

void cubeArray(int *arr, int n) {
    for (int *pt = arr; pt < arr + n; pt++) {
        *pt = *pt * *pt * *pt; 
    }
}

int main() {
    int arr[100], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    cubeArray(arr, n);

    printf("\nCubes of array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}