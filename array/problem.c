#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int array2[n];
    for (int i = 0, j = n-1; i < n, j >= 0; i++, j--)
    {
        // array2[n-1-i] = array[i];
        printf("%d\n", j);
    }
    
    for (int i = 0; i < n; i++) {
        array[i] = array2[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

// 1 2 3 4 5 6 7 8 9
// 9 8 7 6 5 4 3 2 1