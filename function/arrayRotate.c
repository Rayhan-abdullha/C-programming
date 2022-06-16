// #include <stdio.h> 

// void rotateByK(int t, int n, int arr[]) {
//     int first = arr[0];
//     for (int i = 0; i < n-1; i++)
//     {
//         arr[i] = arr[i+1];
//     }
//     arr[n-1] = first;    
    
// }

// int main() {
//     int n;
//     scanf("%d", &n);

//     // input array
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
    
//     // rotat by k
//     int t;
//     scanf("%d", &t);
//     t = t%n;

//     // rotate solution
//     for (int i = 0; i < t; i++)
//     {
//         rotateByK(t, n, arr);
//     }
    

//     for (int i = 0; i < n; i++) {
//         printf("%d",  arr[i]);
//         /* code */
//     }
    
// }

// truncate
// #include <stdio.h>
// #include <string.h>

// void truncate (char s[], int n, int len) {
//     if (n < len && n > 0) {
//         s[n] = '\0';
//     } 
//     printf("%s", s);
// }

// int main() {
//     char s[] = "abcd";

//     int len = strlen(s);
//     int n;
//     scanf("%d", &n);
//     truncate(s, n, len);
// }

// #include <stdio.h>

// int makeAvg(int *pa, int *pb) {
//     int avg = (*pa + *pb) / 2;
//     *pa = avg;
//     *pb = *pb = avg;
// }

// int main() {
//     int a = 20, b = 10;
//     makeAvg(&a, &b);
//     printf("%d %d", a, b);
//     return 0;
// }