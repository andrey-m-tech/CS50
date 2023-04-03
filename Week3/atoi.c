#include <stdio.h>
#include "cs50.h"
#include <string.h>
long atoi( char S[]);

int main(void)
{
    //int aa = atoi("123");
    //printf("Hello world! - %d\n",aa);
    printf("%d", atoi("123"));
}

long atoi(char * s)
{
    int len = strlen(s);
    //return len;
    if (len == 1)
    {
        switch (s[0])
        {
            case '0': return 0;
            case '1': return 1;
            case '2': return 2;
            case '3': return 3;
            case '4': return 4;
            case '5': return 5;
            case '6': return 6;
            case '7': return 7;
            case '8': return 8;
            case '9': return 9;
        }
    }
    else
    {
        char left[len];
        
        for (int i = 0; i < len -1; i++)
        {
            left[i] = s[i];

        }
         
        left[len] = '\0';

        return atoi(left) * 10 + atoi(s[len]);
        
        //return 1;
        
    }

}