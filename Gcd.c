// #include <stdio.h>
// #include <string.h>

// int main() {
//   int a, b;
//   scanf("%d %d", &a, &b);
// //   int gcd = 1;
// //   for(int g = 1; g <= a && g <= b; g++){
// //       if (a%g == 0 && b%g ==0) {
// //           gcd = g;
// //       }
// //   }
//     // int gcd = 0;
//     while(a != 0) {
//         int mod = b % a;
//         b = a;
//         a = mod;
//         printf("gcd = %d %d\n", a, b);
//     }
//   printf("%d\n", b);
// }

// 6. make array
#include <stdio.h>
#include <string.h>

void populate(int n, int squares[]) {
    for(int i = 0; i < n; i++) {
        printf("%d\n", squares[i]);
    }
}

void makeNArray(int n, int squares[]) {
    for(int i = 0; i < n; i++) {
        int temp = i+1;
        squares[i] = temp * temp;
    }
    // populate
    populate(n, squares);
    
}

int main() {
   int n, arr[n];
   scanf("%d", &n);
   makeNArray(n, arr);
   return 0;
}