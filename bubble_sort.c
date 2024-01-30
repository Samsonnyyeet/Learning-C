#include <stdio.h>
#include <stdbool.h>

// swap the contents of an address with the contents of another address
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n) {
    int j = 0;
    bool flag = true; // if an entire iteration is completed with no elements out of order, it is set to false

    while (flag) {    
        flag = false;
        for(int i = 0; i < n-1; i++) {
            j = i+1;
            if (arr[j] < arr[i]) {
                swap(&arr[j], &arr[i]);
                flag = true;
            }
        }
    }
}

int main() {
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubble_sort(arr, 10);

    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
}