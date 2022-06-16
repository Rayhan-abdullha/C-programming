/**
// A - A
#include <stdio.h>
#include <string.h>
int main() {
	int i, e, k = 0,a, q=0;
	char s[100];
	scanf("%s", &s);
	a = strlen(s);
	for (int j = 0; j < a; j++) {
		for (i = j+1; i < a; i++) {
			if (s[j] == s[i]) {
                s[j] = '0';
            }
		}}
    
    for (int i = 0; i < a; i++) {
        if (s[i] != '0') {
            q++;
        }
    }
    if ((q%2) == 0) {
        printf("CHAT WITH HER!");
    } else {
        printf("IGNORE HIM!");
    }
}
*/

    

/**   

// E - E

#include<stdio.h>
int main()
{

    char s[101];
    int len,i,a1=0,b1=0,c1=0,d1=0,e1=0,f1=0,g1=0,h1=0,i1=0,j1=0,k1=0,l1=0,m1=0,n1=0,o1=0,p1=0,q1=0,r1=0,s1=0,t1=0,u1=0,v1=0,w1=0,x1=0,y1=0,z1=0;
    while(scanf("%d",&len)!=EOF)
    {
        scanf("%s",s);
        for(i=0; i<len; i++)
        {
            if(s[i]=='a'||s[i]=='A')
                a1++;
            else  if(s[i]=='b'||s[i]=='B')
                b1++;
            else  if(s[i]=='c'||s[i]=='C')
                c1++;
            else  if(s[i]=='d'||s[i]=='D')
                d1++;
            else  if(s[i]=='e'||s[i]=='E')
                e1++;
            else  if(s[i]=='f'||s[i]=='F')
                f1++;
            else  if(s[i]=='g'||s[i]=='G')
                g1++;
            else  if(s[i]=='h'||s[i]=='H')
                h1++;
            else  if(s[i]=='i'||s[i]=='I')
                i1++;
            else  if(s[i]=='j'||s[i]=='J')
                j1++;
            else  if(s[i]=='k'||s[i]=='K')
                k1++;
            else  if(s[i]=='l'||s[i]=='L')
                l1++;
            else  if(s[i]=='m'||s[i]=='M')
                m1++;
            else  if(s[i]=='n'||s[i]=='N')
                n1++;
            else  if(s[i]=='o'||s[i]=='O')
                o1++;
            else  if(s[i]=='p'||s[i]=='P')
                p1++;
            else  if(s[i]=='q'||s[i]=='Q')
                q1++;

            else  if(s[i]=='r'||s[i]=='R')
                r1++;
            else  if(s[i]=='s'||s[i]=='S')
                s1++;
            else  if(s[i]=='t'||s[i]=='T')
                t1++;
            else  if(s[i]=='u'||s[i]=='U')
                u1++;

            else  if(s[i]=='v'||s[i]=='V')
                v1++;
            else  if(s[i]=='w'||s[i]=='W')
                w1++;
            else  if(s[i]=='x'||s[i]=='X')
                x1++;
            else  if(s[i]=='y'||s[i]=='Y')
                y1++;
            else  if(s[i]=='z'||s[i]=='Z')
                z1++;

        }
        if(a1>=1&&b1>=1&&c1>=1&&d1>=1&&e1>=1&&f1>=1&&g1>=1&&h1>=1&&i1>=1&&j1>=1&&k1>=1&&l1>=1&&m1>=1&&n1>=1&&o1>=1&&p1>=1&&q1>=1&&r1>=1&&s1>=1&&t1>=1&&u1>=1&&v1>=1&&w1>=1&&x1>=1&&y1>=1&&z1>=1)
            printf("YES\n");
        else
            printf("NO\n");
    }
}

*/

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     int i,cnt=0;
//     char s[20];
//     scanf("%s",s);
//     for(i=0; i<strlen(s); i++)
//     {
//         if(s[i]=='4'||s[i]=='7')
//         {
//             cnt++;
//         }
//     }
//     if(cnt==4||cnt==7)
//         printf("YES\n");
//     else
//         printf("NO\n");
//     return 0;
// }

/**
// D - D
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int i,l;
char s[1000];

scanf("%s",s);
for(i=0;i<strlen(s);i++)
{
if(s[0]>=97&&s[0]<=122) s[0]=65+s[0]-97;
}
printf("%s\n",s);
 
 return 0;

}

**/




// #include <stdio.h>
// #include <string.h>
// int main() {
//     int t;
// 	scanf("%d", &t);
// 	while (t--)
//     {
//         char a[10];
//         scanf("%s", &a);
// 		for (int j = 1; j < strlen(a); j++) {
//             putchar(a[j]);
//             if (j % 2 == 1) j++;
            
//         }
//         printf("\n");
//     }
    
// 	return 0;
// } 


// #include<stdio.h>
// #include<string.h>
// int main(){
//     int t;
//     char str[101];
//     scanf("%d", &t);
//     while(t--){
//         scanf("%s", str);
//         int len = strlen(str);
//         printf("%c", str[0]);
//         for(int i=1; i<len; i+=2){
//             printf("%c", str[i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// javascript splice method
// C Program to Insert an element
// at a specific position in an Array

// Selection sort in C

