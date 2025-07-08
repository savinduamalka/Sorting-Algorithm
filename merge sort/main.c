#include <stdio.h>

void printArray(int arr[], int size) {
    
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    printf("Merge Sort program....\n");

    int arr[] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 50, 42};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    return 0;
}
