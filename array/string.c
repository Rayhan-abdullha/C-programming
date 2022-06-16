#include <stdio.h>
int main() {
    char str[] = "This is a string";
    int sz = sizeof(str)/sizeof(str[0]);

    // for (int i = 0; i < sz; i++)
    // {
    //     printf("%d -> %c (ASCII = %d)\n", i, str[i], str[i]);
    // }
    // str[6] = 'n';
    // printf("%d\n", sz);
    // printf("%s", str);
    putchar(str);
    return 0;
}

#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello world Dhaka";
    /**
        find length.
        int len = strlen(str);

        int len = 0;
        while (str[len] != '\0')
        {
            len++;
        }
        printf("%d", len);
    */

    /**
     *  copy string
    char str2[100];
    int len = 0;
    while (str[len] != '\0')
    {
        
        str2[len] = str[len];
        len++;
        if (str[len] == '\0') {
            str2[len] = '\0';
        }
    }
    
    printf("%d", str2);


    * another way *
        char str3[100];
        strncpy(str3, str, 9);
        str3[9] = '\0';
        printf("%s", str3);
    */

    char a[100];
    scanf("%s", a);
    printf("%s", a);
    
    
}