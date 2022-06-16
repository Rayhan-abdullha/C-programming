// #include <stdio.h>
// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     int count =  0;
//     for (int i = a; i <= b; i++)
//     {
//         if (i >= a && i <= b) {
//             count++;
//         }
//     }
//     printf("%d", count);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     int count = 0;
//     int remain = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int p, q;
//         scanf("%d %d", &p, &q);
//         remain = q - p;
//         if (remain >= 2) {
//             count++;
//         }
//     }
//     printf("%d", count);
    
//     return 0;
// }

// D
// #include <stdio.h>
// int main() {
//     int a;
//     scanf("%d", &a);
//     int bjorn = 0, holand = 0;
//     for (int i = 1; i <= a*2; i++)
//     {
//         char str;
//         scanf("%c", &str);
//         if (str == 'A') {
//             bjorn++;
//         } else {
//             if (str == 'D') {
//                 holand++;
//             }
//         }
//     }

//     if (bjorn == holand) {
//         printf("Friendship");
//     } else if (bjorn > holand) {
//         printf("Anton");
//     } else {
//         printf("Danik");
//     }

    
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     int count = 0;
//     if (a % 2 == 1 ){
//         for (int i = 1; i <= a; i++) {  
//             for (int j = 1; j <= b; j++) {
//                 if (i % 2 == 1) {
//                     printf("#");
//                 } else {
//                     if (i % 2 == 0 && i % 4 != 0) {
//                         if (j == b) {
//                             printf("#");
//                         } else {
//                             printf(".");
//                         }
//                     }else if (i % 4 == 0){
//                         if (j == 1) {
//                             printf("#");
//                         } else {
//                             printf(".");
//                         }
//                     }
//                 }
                    
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }

// A
// #include <stdio.h>
// int main() {
//     int n, k, a;
//     scanf("%d", &n);
//     int res = 0;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= k; j++) {
//             res = a + i;
//         }
        
//     }
//     printf("%d", res);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// int main() {
//     int s, t, x;
//     scanf("%d %d %d", &s, &t, &x);
//     char str[20];
//     while (s <= 23 || true)
//     {
        
//         if (s > 23) {
//             s = 0;
//         }
//         if (s == x) {
//             strcpy(str, "Yes"); 
//             break;
//         } else {
//             strcpy(str, "No"); 
//         }
//         if (s == t) {
//             break;
//         };
//         s++;
//     }
//     puts(str); 
//     return 0;
// }


// 
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++) {
//         if (i % 2==1) {
//             printf("I hate ");
//         } else {
//             printf("I love ");
//         }
//         if (i != n) {
//             printf("that ");
//         } else {
//             printf("it ");
//         }
//     }
    
    
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= 3; j++) {
//             if (i % 2 == 1) {
//                 printf("#");
//             } else {
//                 printf(".");
//             }
//         }

//         printf("\n");
//     }
// }


// #include <stdio.h>
// int main() {
//     int x;
//     scanf("%d", &x);
//     if (x == 0 || x > 0) {
//         if (x < 40) {
//             x = 40 - x;
//             printf("%d", x);
//         } else if (x >= 40 && x < 70) {
//             x = 70 - x;
//             printf("%d", x);
//         } else if (x >= 70 && x < 90) {
//             x = 90 - x;
//             printf("%d", x);
//         } else {
//             printf("expert");
//         }
//     }
    
//     return 0;
// }


// #include <stdio.h>
// void solve() {
// 	auto cal = [](int a, int b, int c, int x)->int {
// 		int res = a * b * (x / (a + c));
// 		x %= (a + c);
// 		res += b * min(a, x);
// 		return res;
// 	};
// 	int a, b, c, d, e, f, x;
// 	string res = "Takahashi";
// 	cin >> a >> b >> c >> d >> e >> f >> x;
// 	int A = cal(a, b, c, x), B = cal(d, e, f, x);
// 	if (A < B) res = "Aoki";
// 	else if (A == B) res = "Draw";
// 	cout << res << '\n';
// 	return;
// }



// #include <stdio.h>
// int main() {
//     int A, B, C, D, E, F, X;
//     scanf("%d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &X);
//     int taki = 0, aoki = 0;
//     for (int i = A; i <= X; i+=A) {
//         i = i + C;
//         int a = i > X ? i - C : i;
//         if ((i + A + C) > X) {
//             taki += a * B;
//             break;
//         } else {
//             taki += a * B;
//         }
//     }

//     for (int j = D; j <= X; j+=D) {
//         j = j + F;
//         int a = j > X ? j - F : j;
//         if ((a + D + F) > X) {
//             aoki += a * E;
//             break;
//         } else {
//             aoki += a * E;
//         }
//     }
//     if (taki == aoki) {
//         printf("Draw");
//     } else if (taki > aoki) {
//         printf("Takahashi");
//     } else {
//         printf("Aoki");
//     }
// }

// E
// #include <stdio.h>
// int main() {
//     int A, B, C, D, E, F, X;
//     scanf("%d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &X);
//     int taki = 0, aoki = 0;
//     for (int i = A; i <= X; i+=A){
//         if ((i+C) == X) {
//             i = i;
//             break;
//         } else if ((i+C) > X) {
//             i = i;
//             taki = i * B;
//             break;
            
//         } else {
//             i = i + C;
//             taki = i * B;
//         }
        
//     }
//     for (int i = D; i <= X; i+=D){
//          if ((i + F) == X) {
//              i = i;
//             break;
//         }else if ((i+F) > X) {
//             i = i;
//             aoki = i * E;
//             break;
//         } else {
//             i = i + F;
//             aoki = i * E;
//         }
        
        
//     }
//     if (taki == aoki) {
//         printf("Draw");
//     } else if (taki > aoki) {
//         printf("Takahashi");
//     } else {
//         printf("Aoki");
//     }
    
// }


// #include <stdio.h>
// int main() {
//     int abc, sum, c, a, b, x;
//     scanf("%d", &abc);
    
//     c = abc % 10;
//     x = abc / 10;
//     b = x % 10;
//     a = x / 10;
//     // condition check
//     if (a != 0 && b != 0 && c != 0) {
//         sum = abc + (b * 100 + c * 10 + a) + (c * 100 + a * 10 + b);
//     }
//     printf("%d", sum);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int n, k, a;
//     scanf("%d %d %d", &n, &k, &a);
    
//     int res = 0;
//     res = a;

//     for (int i = 1; i < k; i++) {
//         if (res == n) {
//             res = 1;
//         } else {
//             res++;
//         }
//     }

//     printf("%d", res);
    

//     return 0;
// }


// E - E

// #include<stdio.h>
// #include <stdbool.h>
// int main()
// {
//     int A, B, C, D, E, F, X, i,j,stop=0;
//     scanf("%d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &X);
//     int takahashi = 0, aoki = 0;
//     while (true)
//     {
//         for(j=1;j<=A;j++) {
//             takahashi+=B;
//             stop++;
//             if(stop>=X)
//                 break;
//         }
//         if(stop>=X) break;
//         for(j=1;j<=C;j++)
//         {
//             stop++;
//             if(stop>=X)
//                 break;
//         }
//             if(stop>=X)
//             break;
//     }
    
//     stop=0;
//     while (true){
//         for(j=1;j<=D;j++){
//             aoki+=E;
//             stop++;
//             if(stop>=X)
//                 break;
//         }
//         if(stop>=X)break;

//         for(j=1;j<=F;j++) {
//             stop++;
//             if(stop>=X)
//             break;
//         }
//         if(stop>=X)break;
//     }
    
//     // check condition
//     if (takahashi == aoki) {
//         printf("Draw");
//     } else if(takahashi>aoki) {
//         printf("Takahashi");
//     } else {
//         printf("Aoki");
//     }

//     return 0;
// }
