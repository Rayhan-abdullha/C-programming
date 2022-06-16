// Modile 6.5 ProblemSet//
/*

01. Write a C program that prints all even numbers between 1 and n (inclusive), where n is taken as input.

#include <stdio.h>
int main() {
    int count;
    scanf("%d", &count);

    for (int i = 1; i <= count; i++) {
        if(i % 2 == 0){
            printf("%d\n", i);
        }   
    }
    return 0;
}

//
02. Write a C program that accepts two integers and prints true if either one is 5 or their sum or difference is 5.

#include <stdio.h>
int main() {
    for (int i = 0; i < 5; i++) {
        int a,b;
        scanf("%d %d", &a, &b);
        int sum = a + b;
        int difference = a - b;
        if (a == 5 || b == 5 || sum == 5 || difference == 5) {
            printf("true");
        } else {
            printf("false");
        }
    }
    return 0;
}

//
03. Write a C program to check whether a given non-negative number is a multiple of 3 or 7, but not both.  For example: inputs 7, 3, 6, 14 should output yes. Inputting 21, 42 should output no.

#include <stdio.h>
int main() {

    int b;
    scanf("%d", &b);
    
    if (b > 0) {
        if (b % 3 == 0) {
            printf("myliple number 3");
        } else if (b % 7 == 0) {
            printf("muliple number 7");
        } else {
            printf("This is not myliple number");
        }
    } 
    return 0;
}

//
04. Write a C program that reads an integer between 1 and 12 and print the month of the year in English.

#include <stdio.h>
int main() {
    int a ;
    scanf("%d", &a);
    switch (a){
    case 1:
        printf("january");
        break;
    case 2:
        printf("february");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("Jun");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        printf("There have no Valid Month. I think Mars Planet has");
        break;
    }
    return 0;
}

//
05. Write a C program that will first read an integer n, then read n integers. From those, it will find the sum of even integers.

#include <stdio.h>
int main() {
    printf("Enter n: ");
    int num;
    scanf("%d", &num);
    int sum = 0;
    printf("Input 5 integers: ");
    for (int i = 1; i <= num; i++) {
        int a;
        scanf("%d", &a);
        if ( a % 2 == 0) {
            sum += a;
        }
    }
    printf("Sum of even integers = %d", sum);
    return 0;
}

//
06. Temparature message

#include <stdio.h>
int main() {
    int temp;
    scanf("%d", &temp);

    if (temp < 0) {
        printf("Freezing Weather");
    } else if (temp >= 0 && temp <= 10) {
        printf("Very Cold weather");
    } else if (temp <= 20) {
        printf("Cold weather");
    } else if (temp <= 30) {
        printf("Notmal in Temp");
    } else if (temp <= 40) {
        printf("Hot Temperature");
    } else {
        printf("Very Hot");
    }
}

//
07. Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.

#include<stdio.h>
int main() {
	int side1, side2, side3;
 
  	printf("\n Please Enter Three Sides of a Triangle : ");
  	scanf("%d %d %d", &side1, &side2, &side3);
  	
  	if (side1 == side2 && side2 == side3) {
        printf("Equlateral Triangle");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles Triangle");
    } else {
        printf("Scalene Triangle");
    }
 	return 0;
 }

// 
08. Write a C program to check whether an alphabet is a vowel or consonant.

#include <stdio.h>
int main() {
    printf("Enter char: ");
    char ch = 'a';
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel");
    } else {
        printf("Consonent");
    }
    return 0;
}

//
09.Fizzbuzz is a very well known problem. Given a positive integer N, you need to print n lines.

#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        if (i % 3==0 && i % 5==0) {
            printf("Fizzbuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}

//
10. Write a program in C to display the cube of the number upto given an integer. 

#include <stdio.h>
int main() {
    printf("Input number of Terms: ");
    int base = 5;
    scanf("%d", &base);
    int cubeRes = 1;
    int cube = 3;
    for (int i = 1; i <= base; i++) {
        for (int j = 1; j <= 3; j++) {
            cubeRes *= i;
        }
        printf("Number is: %d and cube of the %d is: %d\n", i, i, cubeRes);
        cubeRes = 1;
    }
    return 0;
}
*/


// #include <stdio.h>

// int main() {

//   int n, reverse = 0, remainder;

//   printf("Enter an integer: ");
//   scanf("%d", &n);
//   int b = n;
//   while (n != 0) {
//     remainder = n % 10;
//     reverse = reverse * 10 + remainder;
//     n /= 10;
//   }

//   if (reverse == b) {
//       printf("true");
//   } else {
//       printf("false");
//   }

//   return 0;
// }


////////////////////////

#include <stdio.h>
int main() {
    int a, b, c;
    int sum = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c) {
        sum = b + c;
        printf("%d", sum);
    } else if (b >= a && b >= c) {
        sum = a + c;
        printf("%d", sum);
    }  else if (c >= b && c >= a) {
        sum = b + a;
        printf("%d", sum);
    }
    return 0;
}


#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        printf("%d Abracadabra\n", i);
    }

    return 0;
}

#include <stdio.h>
int main() {
    int ch;
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("vowel");
    } else {
        printf("consonant");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int x;
    // scan
    scanf("%d", &x);
    if (x < 1200) {
        printf("ABC");
    } else {
        printf("ARC");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int n;
    // input
    scanf("%d", &n);
    double res = 0;
    for (int i = 1; i <= n; i++)
    {
        double a, b;
        scanf("%lf %lf", &a, &b);
    	res += a * b;
    }
    printf("%.3lf", res);
    return 0;
}


#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int temp = 0;
    for (int i = 1; i <= n; i++)
    {
        int t;
        scanf("%d", &t);
        if (t < 0) {
            temp++;
        }
    }
    printf("%d", temp);
    return 0;
}


