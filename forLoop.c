// #include <stdio.h>
// int main() {
// 	int a, b;
//     int result;
//     char op;
//     scanf("%d %c %d", &a, &op, &b);
//     if (b != 0 && a != 0) {
//         if (a > 0 && b > 0) {
//             if (op == '+') {
//                 result = a + b;
//                 printf("%d", result);
//             } else if(op == '-') {
//                 result = a - b;
//                 printf("%d", result);
//             } else if (op == '*') {
//                 result = a * b;
//                 printf("%d", result);
//             } else if (op == '/') {
//                 result = a / b;
//                 printf("%d", result);
//             } else if (op == '%') {
//                 result = a % b;
//                 printf("%d", result);
//             }
//         } else {
//             printf("Cannto divide by Nagetive Number"); 
//         }
//     } else {
//         printf("Cannto divide by O");  
//     }
// 	return 0;
// }


// #include <stdio.h>
// int main() {
//     int marks;
//     scanf("%d", &marks);
//     if (marks >= 40 && marks < 50) {
//         printf("%d is D", marks);
//     } else if (marks >= 50 && marks < 60) {
//         printf("%d is C", marks);
//     } else if (marks >= 60 && marks < 70) {
//         printf("%d is B", marks);
//     } else if (marks >= 70 && marks < 80) {
//         printf("%d is A", marks);
//     } else if (marks >= 80) {
//         printf("%d is A+", marks);
//     } else {
//         printf("You fail");
//     }
// }


// #include <stdio.h>
// int main() {
//     int num, num1;
//     scanf("%d %d", &num, &num1);
//     // if (num > num1) {
//     //     printf("%d is greater", num);
//     // } else {
//     //     printf("%d is greater", num1);
//     // }
//     int res = num > num1 ? num : num1;
//     printf("%d", res);
// }



// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int t;
//     scanf("%d", &t);

//     for(int cs=1; cs <= t; cs++) {
//         int r, e , c;
//         scanf("%d %d %d", &r, &e, &c);
        
//         if (r < (e - c)) {
//             printf("advertise\n");
//         } else if (r == (e - c)) {
//             printf("does not matter\n");
//         } else {
//             printf("do not advertise\n");
//         }
        
//     }
//     return 0;
// }



