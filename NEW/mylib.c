//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "mylib.h"

// mylib.h                 Andrey Minin CS50 inspired library

// The purpose of this library is to be easy to understend and readable
// opposite to looking professional and scary with all the compiler directives
// and i am not there yet :)

// Some common functions made here as a mean of practice and for fun
// int strlen_my(string s)   ->  returns the length of a string in bytes
// int strcmp_my(string s, string t)  .> compares the strings, returns 0 if equal, 1 if not equal

// string getstring_my(string prompt) -> Requests for a string and returns it
// long atoi_my(char *s) -> returns long converted from the given string



typedef char *string; // Define STRING


// ****************************************************************************  STRLEN_MY
int strlen_my(string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

// ****************************************************************************  STRCMP_MY
// Strcmp_my   -  analog of strrcmp  in  string.h   Сравнивает две строки в памяти.
// Если строки совпадают возвращает 0, если не совпадают 1
int strcmp_my(string s, string t)
{
    // returns 0  if equal

    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] != t[i])
        {
            return 1;
        }
        i++;
    } // while

    if (s[i] != t[i]) //  s[i] = '\0'   = t[i] = '\0'
    {
        return 1;
    }
    return 0;
}
// ############################################################################

// ****************************************************************************  STRCOPY_MY
// Strcopy_my   -  analog of strcopy  in  string.h
// Копирует строку s в отведенное (предварительно, НЕ в этой процедуре) malloc место в памяти по адресу t
//   Например , новая строка t:    char *t = malloc(strlen(s) + 1);
void strcopy_my(string s, string t)
{
    for (int i = 0; i < strlen_my(s) + 1; i++)
    {
        t[i] = s[i];
    }
}
/*   Пример использование
        #include <stdio.h>
        #include <cs50.h>
        #include "mylib.h"
        #include <stdlib.h>

        int main(void)
        {
            char *s = get_string("s: ");
            char *t = malloc(strlen_my(s) + 1);

            strcopy_my(s, t);

            printf("%s\n", t);


        }

                >>
                make strcopy_my
                week4/ $ ./strcopy_my
                s: Hello
                Hello
                week4/ $ ./strcopy_my
                s:

                week4/ $ ./strcopy_my
                s: Привед, Медвед!
                Привед, Медвед!
*/
// ############################################################################

// ****************************************************************************  TOUPPER_MY
// Возвращает переданный символ английского алфавита в заглавном виде
// Returns given char of english alphabet in Upper Case
char toupper_my(char c)
{
    if ((c >= 'a') && (c <= 'z'))
    {
        c = c - ('a' - 'A');
    }
    return c;
}
// ############################################################################

// ****************************************************************************  TOLOWER_MY
// Возвращает переданный символ английского алфавита в прописном виде
// Returns given char of english alphabet in LowerCase
char tolower_my(char c)
{
    if ((c >= 'A') && (c <= 'Z'))
    {
        c = c + ('a' - 'A');
    }
    return c;
}
// ############################################################################

// ****************************************************************************  TOUPPERSTRING_MY
// Конвертирует все английские символы в переданной строке в заглавные буквы
// Conversion of every letter in THE given string to UpperCase
void toupperstring_my(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        s[i] = toupper_my(s[i]);
        i++;
    }
}
/*
            USAGE:
            #include "mylib.h"
            int main(void)
            {
                char *s = get_string("s: ");
                char *t = malloc(strlen_my(s) + 1);

                strcopy_my(s, t);
                toupper_string_my(t);
                printf("%s\n", t );
            }
            >>
            s: Hello
            HELLO
*/
// ############################################################################

// ****************************************************************************  TOLOWERSTRING_MY
// Конвертирует все английские символы в переданной строке в прописные буквы
// Conversion of every letter in THE given string to LowerCase
void tolowerstring_my(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        s[i] = tolower_my(s[i]);
        i++;
    }
}
/*
            USAGE:
            #include "mylib.h"
            int main(void)
            {
                char *s = get_string("s: ");
                char *t = malloc(strlen_my(s) + 1);

                strcopy_my(s, t);
                tolower_string_my(t);
                printf("%s\n", t );
            }
            >>
            s: HeLlo
            hello
*/
// ############################################################################


// ****************************************************************************  GETSTRING_MY
// USAGE:   char *s = getstring_my("Enter the new string:");
/*
        #include <stdio.h>
        #include "mylib.h"

        int main(void)
        {
            string st = getstring_my("Введите строку:");
            printf("s = %s\n", st);

        }

*/

string getstring_my(string prompt)
{
    printf("%s ", prompt);
    char c;
    char *s = NULL;
    s = malloc(1);
    s[0] = '\0';
    char *t = NULL;
    int n = 1;

    while (1) // keep mallocing till the enter pressed
    {
        scanf("%c", &c);
        if (c == 10) // LF
        // LF is a control character used in computing and communications to indicate the end of a line of text and the start of
        // a new line.
        {
            return s;
        }
        else // Not LF symbol
        {

            t = malloc(n + 1);
            strcopy_my(s, t);
            t[n - 1] = c;
            t[n] = '\0';
            free(s); // free the old string memory
            s = t;   // now s points to the new memory
            n++;
        }

    } // while
    return s;
}

// ############################################################################


// ****************************************************************************  ATOI_MY
// RECURSIVE !    Atoi  inspred by cs50 2023 course, lecture .. , t = ..
// procedure keeps calling itself, OS putting it copies on the stack? with deminishing string (-1)
// while it meets the DEFAULT CASE = one symbol
int atoi_my(char *s)
{
    int len = strlen_my(s);
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

        for (int i = 0; i < len  ; i++)
        {
            left[i] = s[i];
        }

        left[len] = '\0';

        return atoi(left) + atoi(&s[len]);

    } //else
    return 0;


}

// ############################################################################

int getint_my(string prompt)
{

    printf("%s ", prompt);
    char c;
    char *s = NULL;
    s = malloc(1);

    s[0] = '\0';
    char *t = NULL;
    int n = 1;

    while (1) // keep mallocing till the enter pressed
    {
        scanf("%c", &c);
        if (c == 10) // LF
        // LF is a control character used in computing and communications to indicate the end of a line of text and the start of
        // a new line.
        {
            return atoi_my(s);
        }
        else // Not LF symbol
        {

            t = malloc(n + 1);
            strcopy_my(s, t);
            t[n - 1] = c;
            t[n] = '\0';
            free(s); // free the old string memory
            s = t;   // now s points to the new memory
            n++;
        }

    } // while

    return 0;

}
