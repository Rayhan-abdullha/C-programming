// lab practice

/**
// Write a function named reverse_array() which will take an array, size of that array and reverse that array. You don’t need to return anything because if you reverse that array, the changes will be applied to the original array also.
#include <stdio.h>

void reverse_array(int arr[],int t) {
    int temp[t];
    for (int i = 0, j = t-1; i < t; i++, j--)
    {
        temp[i] = arr[j];
    }
    for (int i = 0; i < t; i++)
    {
        arr[i] = temp[i];
    }
}

void array_input(int arr[],int t) {
    printf("Enter array: ");
    for (int i = 0; i < t; i++){
        scanf("%d", &arr[i]);
    }
}

void printDisplay(int arr[],int t) {
    for (int i = 0; i < t; i++) {
        printf("%d", arr[i]);
    }
    
}
int main() {
    printf("Enter array size: ");
    int t;
    scanf("%d", &t);
    int arr[t];
    array_input(arr, t);
    
    reverse_array(arr, t);
    printDisplay(arr, t);
}
*/

//
#include <stdio.h>

void set_min_max(int *a,int *b) {
    if (*a > *b) {
        *a = *b;
    } else {
        *b = *a;
    }
    // find max
    if (*a < *b) {
        *a = *b;
    } else {
        *b = *a;
    }
}

int main() {
    printf("Enter value: ");
    int a, b;
    scanf("%d %d", &a, &b);
    
    set_min_max(&a, &b);
    printf("min = %d, max = %d\n", a, b);
}