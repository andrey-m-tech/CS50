// copies the string s to the string t and captitalizes the first character
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h> // malloc

int main(void)
{
    char * s = get_string("String: ");
    char * t = malloc(strlen(s) + 1);
    for (int i = 0; i< strlen(s) +1; i++)
    {
        *(t+i) = *(s+i);
        //t[i] = s[i];

    }

    if (strlen(t) > 0)
    {
        *(t) = toupper(*t);
    }
    printf("%s\n",t);


    return 0;
}
