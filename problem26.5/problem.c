// Write a function minmax(int a, int b)  that will take two integers and simultaneously return both their min and their max. Use structures to return the values. 
/**
#include<stdio.h>

struct Value{
    int min;
    int max;
};

struct Value minimax(int a, int b) {
    struct Value ans;
    if (a > b) {
        ans.max = a;
    } else {
        ans.max = b;
    }
    if (a < b) {
        ans.min = a;
    } else {
        ans.min = b;
    }
    return ans;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    struct Value ans = minimax(a, b);
    printf("Max = %d\n", ans.max);
    printf("Min = %d", ans.min);
}
**/

// Write a function arraysum(int n, int a[], int b[])  that will take two arrays of equal length n, and find their indexwise sum. For example, if a = {2, 3, 4} and b = {1, 2, 3}, their index-wise sum would be {3, 5, 7}. Use structures to return the values.
// #include<stdio.h>
// #include<stdlib.h>

// void input(int count, int arr[]) {
//     printf("Enter arr value: ");
//     for (int i = 0; i < count; i++) {
//         scanf("%d", &arr[i]);
//     }
// }

// int* arraysum(int count, int arr[], int arr1[]) {
//     int *sum = (int*)malloc(count*sizeof(int));
//     for (int i = 0; i < count; i++) {
//         sum[i] = arr[i];
//     }
//     for (int i = 0; i < count; i++) {
//         sum[i] += arr1[i];
//     }
//     return sum;
// }

// void display(int count, int arr[]) {
//     printf("Display Data: \n");
//     for (int i = 0; i < count; i++) {
//         printf("%d\n", arr[i]);
//     }
// }

// int main() {
//     int n, arr[n], arr1[n];
//     printf("Enter length: ");
//     scanf("%d", &n);
//     input(n, arr);
//     input(n, arr1);
//     int *res = arraysum(n, arr, arr1);
//     display(n, res);
// }