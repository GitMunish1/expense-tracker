#include <stdio.h>
#include <stdlib.h>

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move indices towards the center
        start++;
        end--;
    }
}

int main() {
    int num, *arr, i;
    
    // Read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &num);

    // Allocate memory for the array
    arr = (int*) malloc(num * sizeof(int));

    // Read array elements
    printf("Enter %d elements:\n", num);
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    // Reverse the array
    reverseArray(arr, num);

    // Print the reversed array
    printf("Reversed Array: ");
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));

    // Free the allocated memory
    free(arr);

    return 0;
}
