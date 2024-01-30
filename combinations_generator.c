#include <stdio.h>
#include <stdlib.h>


int generateCombinations(int arr[], int data[], int start, int end, int index, int r) {
    if (index==r) {
        for (int i=0; i<r; i++) {
            printf("%d ", data[i]);
        }
        printf("\n");
        return 0;
    }

    int i = start;
    while(i <= end && (end-i+1) >= r-index) {
        data[index] = arr[i];
        generateCombinations(arr, data, i+1, end, index+1, r);
        i++;
    }
}

void printCombination(int arr[], int n, int r)
{
    // A temporary array to store all combination one by one
    // int* data = (int*)malloc(sizeof(int)*r);
    int data[r];
 
    // Print all combination using temporary array 'data[]'
    generateCombinations(arr, data, 0, n-1, 0, r);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int r = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    printCombination(arr, n, r);
}