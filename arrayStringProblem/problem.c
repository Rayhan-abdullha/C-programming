#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int avg = 0;
    for (int i = 0; i < n; i++)
    {
        avg += arr[i];
    }
    double a = (double) avg / n;
    printf("%lf", a);
    

    
    for (int i = 1; i <= 5; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == j) {
            count++;
        }
        }
        printf("%d", count);
    }
    
    
    return 0;
}