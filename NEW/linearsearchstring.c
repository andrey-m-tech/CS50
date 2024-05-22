// CS50 inspired Algorithms 2024. Linear Search, but MALLOC.
// Looking for the "50" in the array of INTs. Returns 0 if "Not Found", 1 if "Found".
// Created by Andrey Minin 20.05.24

#include <stdio.h>
#include <stdlib.h> // malloc
#include "mylib.c"

typedef char *string;
// Looks for the INT = what, in the array of INTs = numbers, of size = n.
// Returns 0 if "Not Found", 1 if "Found".
int linear_search_string(string strings[], int n, string what)
{
    int index = 0;
    //printf("p %p\n", &numbers);

    while (index < n )
    {
        if (strcmp_my(strings[index], what) == 0)
        {
            return 1;
        }
        index++;
    }
    return 0;
}

int main(void)
{
    char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
    int n = 6;

    string s = getstring_my("String: ");

    int result = linear_search_string(strings, n, s);
    printf("Searching for %s, result => %d \n", s, result);

    //free(numbers2);
}

/* Example:
$ ./linearsearchstring
String:  boot
Searching for boot, result => 1
2024/week3/ $ ./linearsearchstring
String:  top hat
Searching for top hat, result => 1
2024/week3/ $ ./linearsearchstring
String:  cat
Searching for cat, result => 0 
*/
