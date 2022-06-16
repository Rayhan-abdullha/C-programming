// #include <stdio.h>
// #include <math.h>
// #include <ctype.h>

// /**
// int main() {
//     char ch;
//     scanf("%c", &ch);
//     if ('A' <= ch && ch <= 'Z') {
//         printf("UpperCase");
//     } else if ('a' <= ch && ch <= 'z') {
//         printf("Lowercase");
//     } else if ('0' <= ch && ch <= '9') {
//         printf("digit");
//     } else {
//         printf("Others");
//     }
//     return 0;
// }


// int main() {
//     char ch;
//     scanf("%c", &ch);
//     if (isupper(ch)) {
//         printf("Lowercase: %c", tolower(ch));
//     } else if (islower(ch)){
//         printf("Uppercase: %c", toupper(ch));
//     }
//     return 0;
// }

// // int main() {
// //     char ch;
// //     scanf("%c", &ch);
// //     if ('A' <= ch && ch <= 'Z') {
// //         char lo = ch - 'A' + 'a';
// //         printf("%c", lo);
// //     } else {
// //         char upr = ch - 'a' + 'A';
// //         printf("%c", upr);
// //     }

// //     return 0;
// // }


// */

// #include <stdio.h>
// int main() {
//     int T;
//     scanf("%d", &T);
//     for (int i = 1; i <= T; i++) {
//         int a, b;
//         scanf("%d %d", &a, &b);
//         int x = 0;
//         for (int j = a; j <= b; j++){
//             int lastDigit = j % 10;
//             if (lastDigit == 2 || lastDigit == 3 || lastDigit == 9) {
//                 x++;
//             }
//         }
//         printf("%d\n", x);
//     }
//     return 0;
// }

#include <stdio.h>
int main () {
    int A, B;
    scanf("%d %d", &A, &B);
    int Addition = A + B;
    int suBstrAct = A - B;
    int multiply = A * B;
    if ( Addition > suBstrAct && Addition > multiply) {
        printf("%d", Addition);
    } else if (suBstrAct > Addition && suBstrAct > multiply) {
        printf("%d", suBstrAct);
    } else {
        printf("%d", multiply);
    }
    return 0;
}
