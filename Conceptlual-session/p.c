
// // Mex
// #include <stdio.h>

// int freq[2001];
// int main() {
//     int n, num, c ;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         scanf("%d", &num);

//         freq[num]++;
//         // printf("freq = %d\n", freq[num]);
//     }

//     // for (int i = 0; i <= 10; i++)
//     // {
//     //     printf("%d %d\n", i, freq[i]);
//     //     /* code */
//     // }
    

//     for (int i = 0; i <= 2000; i++)
//     {
//         if (freq[i] == 0) {
//             printf("%d", freq[i]);
//             break;
//         }
//     }
    
    
//     return 0;
// }


// #include <stdio.h>

// void printCall(void) {
//     static int num = 1;
//     printf("Called %d times\n", num);
//     num++;
// }

// int main() {
//     printCall();
//     printCall();
//     printCall();
//     return 0;
// }

// // global variable
// #include <stdio.h>
// int nums = 10;


// int updateVal(int v) {
//    return nums = nums + v;
// }

// int dobleV (){
//    int doblev = updateVal(5);
//    return doblev * 2;
// }

// void print(){
//     nums = dobleV();
//     printf("%d", nums);
// }

// int main() {
//     print();
//     return 0;
// }


// C program to reverse digits of a number
// #include <stdio.h>
// #include <stdbool.h>

// void reverse(int *num) {
// 	int temp = *num;
// 	int rev = 0;
// 	while (temp != 0) {
// 		rev = rev * 10 + (temp % 10);
// 		temp /= 10;
// 	}
// 	*num = rev;	
// }

// #include<stdio.h>
// int main(){
//     int n = 12345;
// 	scanf("%d", &n);

// 	reverse(&n);
// 	printf("%d", n);
// 	return 0;
// }

// #include <stdio.h>

// void sort(int* a, int* b) {
// 	if (*a > *b) {
// 		int temp = *a;
// 		*a = *b;
// 		*b = temp;
// 	}	
// }

// int main() {
// 	int a, b;
// 	scanf("%d %d", &a, &b);
// 	sort(&a, &b);
// 	printf("%d %d", a, b);
// 	return 0;
// }
// a b c
#include <stdio.h>

void sort(int* a, int* b, int* c) {
	if (*a > *b && *a > *c && *b > *c) {
		int temp = *a;
		*a = *c;
		*b = *b;
		*c = temp;
	}
}

int main() {
	int a, b, c;
	scanf("%d %d", &a, &b, &c);
	sort(&a, &b, &c);
	printf("%d %d %d", a, b, c);
	return 0;
}