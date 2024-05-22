// CS50 inspired Algorithms 2024. Linear Search, but MALLOC.
// Looking for the "50" in the array of INTs. Returns 0 if "Not Found", 1 if "Found".
// Created by Andrey Minin 20.05.24

#include <stdio.h>
#include <stdlib.h> // malloc
#include "mylib.h"

// Looks for the INT = what, in the array of INTs = numbers, of size = n.
// Returns 0 if "Not Found", 1 if "Found".
/*
int linear_search(int *numbers, int n, int what)
{
    int index = 0;
    printf("p %p\n", &numbers);

    while (index < n )
    {
        if (numbers[index] == what)
        {
            return 1;
        }
        index++;
    }
    return 0;
}

*/
int linear_search(int numbers[], int n, int what)
{
    int index = 0;

    while (index < n )
    {
        if (numbers[index] == what)
        {
            return 1;
        }
        index++;
    }
    return 0;
}


int main(void)
{
    int numbers[] = {20, 500, 100, 5, 100, 1, 50};
    int n = 7; // sizeof(numbers) = sizeof(*int) = sizeof(*char) = sizeof(any_pointer) =  8 !!!
    // The Same, little longer

    int *numbers2 = malloc(n * sizeof(int));
    numbers2[0] = 20;
    numbers2[1] = 500;
    numbers2[2] = 100;
    numbers2[3] = 5;
    numbers2[4] = 100;
    numbers2[5] = 1;
    numbers2[6] = 50;

    int what = getint_my("Integer: ");
    //what = 50;
   int result = linear_search(numbers, n, what);
   printf("Searching for %d => %d\n", what, result);

    //string sss = getstring_my("2");
    //int i = atoi_my("ff");
   // printf("%s\n", i);

    free(numbers2);
}


/*   Example
$ ./linearsearch
Integer:  50
Searching for 50 => 1
2024/week3/ $ ./linearsearch
Integer:  32
Searching for 32 => 0
*/
