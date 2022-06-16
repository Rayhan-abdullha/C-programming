#include <stdio.h>
int main() {
    int count;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }

    // int arr2[count];
    // for (int i = 0; i < count; i++)
    // {
    //     arr2[count-1-i] = arr[i];
    // }
    
    // for (int i = 0; i < count; i++)
    // {
    //     arr[i] = arr2[i];
    // }

    // swap array
    for (int i = 0, j = count - 1; i < j; j--, i++) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    

    for (int i = 0; i < count; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    
    return 0;
}
