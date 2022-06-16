//==============52 Problem Solved===================//

/*

// Problem - 1

#include <stdio.h>
int solution() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--)
    {
       solution();
        
    }
    
    
    return 0;
}

*/

#include<stdio.h>
#include<string.h>
int main() {
    int T, i;
    char n[101];
    scanf("%d", &T);
    
    for (i = 0; i < T; i++)
    {
        scanf("%s", &n);
        if (strlen(n) %2 == 0) {
            printf("even");
        } else {
            printf("oddd");
        }
    }

    return 0;
}
