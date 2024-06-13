#include <stdio.h>


void reverse_print(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int sum_elements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

   
    reverse_print(arr, size);

    
    int sum = sum_elements(arr, size);
    printf("Sum of all elements: %d\n", sum);

 
}