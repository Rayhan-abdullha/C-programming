


/*
//twiblr 

int main() {
    int a = 200, b = 300;
    scanf("%d %d", &a, &b);

    int totalFollow = 2 * a + 100;
    int extraUsers = totalFollow - b;
    printf("%d", extraUsers);
    return 0;
}

*/

// Bit++
// #include <stdio.h>
// int main() {
//     int n, x = 1, value = 0;
//     scanf("%d", &n);
//     // char input
//     char str[4];
//     while (x <= n) {
//         scanf("%s", str);
//         for (int i = 1; i <= 3; i++) {
//             if (str[i] == '+') {
//                 value++;
//                 break;
//             } else if (str[i] == '-') {
//                 value--;
//                 break;
//             }
//         }
//         x++;
//     }
//     // output
//     printf("%d", value);
    
//     return 0;
// }


// Add Sub Mul
// #include <stdio.h>
// int main () {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     int addition = a + b;
//     int substract = a - b;
//     int multiply = a * b;
//     if ( addition >= substract && addition >= multiply) {
//         printf("%d", addition);
//     } else if (substract >= addition && substract >= multiply) {
//         printf("%d", substract);
//     } else {
//         printf("%d", multiply);
//     }
//     return 0;
// }


// Poor
// int main() {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);

//     if (a == b && a == c) {
//         printf("No");
//     } else if (a == b || a == c || b == c || c == a) {
//         printf("Yes");
//     } else {
//         printf("No");
//     }
    
//     return 0;
// }


// AC or WA
// int main() {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     if (n > 0) {
//         if (m <= n) {
//             if (n == m) {
//                 printf("Yes");
//             } else {
//                 printf("No");
//             }
//         }
//     }
// }

// // Soldier and Bananas
// #include <stdio.h>
// int main() {
//     int k, n, w;
//     scanf("%d %d %d", &k, &n, &w);
//     int totalCost = 0;
//     for (int i = 1; i <= w; i++) {
//         totalCost += 3*i;
//     }

//     int borrow = totalCost - n;
//     if (n >= totalCost) {
//         printf("0");
//     } else {
//         printf("%d", borrow);
//     }
    
//     return 0;
// }

// Wrong Subtraction
// #include <stdio.h>
// int main() {
//     int n, k;
//     scanf("%d %d", &n, &k);
//     for (int i = 1; i <= k; i++) {
//         int digit = n % 10;
//         if (digit != 0) {
//             n--;
//         } else if (digit == 0) {
//             n /= 10;
//         }
//     }
//     printf("%d", n);
    
//     return 0;
// }

// // Bear and Big Brother
// #include <stdio.h>
// // #include <stdbool.h>
// // int main() {
// //     int a, b;
// //     scanf("%d %d", &a, &b);
// //     int count = 0;
// //     while (true)
// //     {
// //         a = a * 3;
// //         b = b * 2;
// //         count++;
// //         if (a > b) {
// //             printf("%d\n", count);
// //             break;
// //         }
// //     }
    
// //     return 0;
// // }


// // // grade
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         int grad;
//         scanf("%d", &grad);
//         int result = (grad - grad) % 5 + 5;

//         if (grad >= 38) {
//             if ((result - grad) < 3 ) {
//                 printf("%d\n", result);
//             } else if ((result - grad) == 3) {
//                 printf("%d\n", grad);
//             }
//         } else {
//             printf("%d\n", grad);
//         }
//     }
//     return 0;
// }






#include <stdio.h>
#include <stdlib.h>

int main() 
{
    // char ch;
    // scanf("%c", &ch);
    // printf("%c", ch);
    
    // char s;
    // scanf("%c", &s);
    // printf("%c", s);
    
    char name[30];
scanf("%s", name);
    printf("%s", name);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
