// Practice working with structs
// Practice applying sorting algorithms
// Bubble Sort
// Repeat n-1 times
//     For i from 0 to n-2
//       If numbers[i] and numbers[i+1] out of order
//         Swap them
//     If no swaps
//         Quit

#include <cs50.h>
#include <stdio.h>

#define NUM_CITIES 10

typedef struct
{
    string city;
    int temp;
}
avg_temp;

avg_temp temps[NUM_CITIES];

void sort_cities(void);

int main(void)
{
    temps[0].city = "Austin";
    temps[0].temp = 97;

    temps[1].city = "Boston";
    temps[1].temp = 82;

    temps[2].city = "Chicago";
    temps[2].temp = 85;

    temps[3].city = "Denver";
    temps[3].temp = 90;

    temps[4].city = "Las Vegas";
    temps[4].temp = 105;

    temps[5].city = "Los Angeles";
    temps[5].temp = 82;

    temps[6].city = "Miami";
    temps[6].temp = 97;

    temps[7].city = "New York";
    temps[7].temp = 85;

    temps[8].city = "Phoenix";
    temps[8].temp = 107;

    temps[9].city = "San Francisco";
    temps[9].temp = 66;

    sort_cities();

    printf("\nAverage July Temperatures by City\n\n");

    for (int i = 0; i < NUM_CITIES; i++)
    {
        printf("%s: %i\n", temps[i].city, temps[i].temp);
    }
}
// End of The Program





// TODO: Sort cities by temperature in descending order
void sort_cities(void)
{
    // Add your code here

    // *********   Bubble Sort **********
    avg_temp temp;
    int norswaps = 1;
    // do 10 (NUM_CITIES) Times
    for (int i = 0; i < NUM_CITIES; i++)
    {
        norswaps = 1;
        for (int j = 0; j < (NUM_CITIES - 2); j++)
        {
            if (temps[j].temp < temps[j + 1].temp)
            {
                // swap
                temp = temps[j + 1];
                temps[j + 1] = temps[j];
                temps[j] = temp;
                norswaps = 0;
            }

        }
        if (norswaps)
        {
            printf("\n      %d Steps Done", i);
            break;
        }
    }

}

/*

./temps

      8 Steps Done
Average July Temperatures by City

Phoenix: 107
Las Vegas: 105
Austin: 97
Miami: 97
Denver: 90
Chicago: 85
New York: 85
Boston: 82
Los Angeles: 82
San Francisco: 66

*/