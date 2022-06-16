// #include <stdio.h>
// void printName(int a, char c[]) {
//     int res = 0;
//     for (int i = 1; i <= a; i++)
//     {
//         if (c == "+") {
//             res += i;
//             printf("%d\n", res);
//         } else if (c == "*") {
//             res *= i;
//             printf("%d\n", res);
//         }
//     }
    
// }
// int main() {
//     printName(10, "*");
// }""


// Write a function to find the area of a rectangle given its length and width.
/**
#include <stdio.h>
#include <string.h>

int rectangle(int n, int w) {
    int rect = n * w;
    return rect;
}

int main() {
    int width, height;
    scanf("%d %d", &width, &height);
    int res = rectangle(width, height);
    printf("%d", res);
    return 0;
}
**/

// Writ ea function that will take an array and find its maximum;

/**
 * gcd
#include <stdio.h>
#include <string.h>

int findGcd(int x, int y) {
    while (y > 0) {
        int temp = x % y;
        x = y;
        y = temp;

    }
    int gcd = x;
   return gcd;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int gcd = findGcd(a, b);
    printf("%d & %d gcd is %d\n", a, b, gcd);
    a /= gcd;
    b /= gcd;
    printf("simplyfied is %d/%d", a, b);
    return 0;
}
**/

// #include <stdio.h>

// int findMax(int a, int b) {
//     if (a > b) a;
//     else return b;
// }

// int findMaxValue(int arr[], int arr_length) {
//     int max = 0;
//     for (int i = 0; i < arr_length; i++)
//     {
//         max = findMax(arr[i], max);
//     }

//     return max;
    
// }

// int main() {
//     int arr[] = {3, 400, 6, 74, 6};
//     int arr_length = 5;
//     int findMax = findMaxValue(arr, arr_length);
//     printf("%d", findMax);
//     return 0;
// }


// Asma wrote the following function to make an integer positive. 
// #include <stdio.h>

// void makePositive(int a) {
// 	if (a < 0) {
// 		a = 1;
// 	} else a;
//     printf("%d", a);
// }


// int main() {
//     makePositive(6);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     const int a = 20;
//     printf("%d", a);

//     int* pVal;
//     pVal = &a;

//     printf("%d", *pVal);

//     return 0;
// }


#include <stdio.h>

int main() {
    int arr[] = {12, 34, 65, 7};
    
    int newArr[4];
    for (int i = 0, j = 3; i < 4; i++, j--)
    {
       newArr[j] = arr[i];
    }
    
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", newArr[i]);
    }
    
}