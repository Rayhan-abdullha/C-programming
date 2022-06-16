// #include <stdio.h>
// int main() {
//   int T = 3;
//   scanf("%d", &T);
//   for (int i = 1; i <= T; i++) {
//     int x, y, z;
//     scanf("%d %d %d", &x, &y, &z);
//     x += z * 2;

//     // check condition
//     if (x > y || x == y) {
//       printf("YES\n"); // yes
//     } else {
//       printf("NO\n"); // no
//     }
//   }
  
//   return 0;
// }


// #include <stdio.h>
// int main() {
//   int T, oneWeek = 7;
//   scanf("%d", &T);
//   for (int i = 1; i <= T; i++) {
//     int days, goodDay = 0, badDay = 0;
//     for (int j = 1; j <= oneWeek; j++) {
//       //input weather
//       scanf("%d", &days);
//       // check weather is good or bad
//       if (days == 1) {
//         goodDay++; // goodDay = goodDay + 1
//       } else {
//         badDay++; // badDay = badDay + 1
//       }
//     }

//     // check goodDay > badDay
//     if (goodDay > badDay) {
//       printf("Yes"); // result = Yes
//     } else {
//       printf("NO"); // result = No
//     }
//     printf("\n");
//   }
//   return 0;
// }

# include <stdio.h>
int main() {
  int i = 1, j= 1;
  do {
    printf("Welcome for use Do While Loop!\n");
    i++;
  } while (i > 10);
  
  return 0;
}