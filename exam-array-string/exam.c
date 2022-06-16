// How do you declare a function that takes as input an integer and a double and returns a char?
#include <stdio.h>

int gcd(int a, int b) {

}


int main() {

    int a, b, c, d, e, f, g, h, i , j;
    scanf("%d", &a, &b, &c, &d, &e, &f, &g, &h);
    int gcd = 0, gcda = 0;

    for (int k = 0; k <= a && k <= b; k++) {
        if ((a%k==0) && (b%k==0) && (c%k==0) && (d%k==0) && (e%k==0) && (f%k==0) && (g%k==0) && (h%k==0) && (i%k==0) && (j%k==0)) {
            gcd = k;
        } else {
            gcda = 0;
        }
    }

    printf("%d", gcd);
    
    return 0;
}