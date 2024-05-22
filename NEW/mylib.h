#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "mylib.c"

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

typedef uint8_t  BYTE;
typedef uint32_t DWORD;
typedef int32_t  LONG;
typedef uint16_t WORD;


// ****************************************************************************  STRLEN_MY
int strlen_my(string s);


// ****************************************************************************  STRCMP_MY
// Strcmp_my   -  analog of strrcmp  in  string.h   Сравнивает две строки в памяти.
// Если строки совпадают возвращает 0, если не совпадают 1
int strcmp_my(string s, string t);

// ############################################################################

// ****************************************************************************  STRCOPY_MY
// Strcopy_my   -  analog of strcopy  in  string.h
// Копирует строку s в отведенное (предварительно, НЕ в этой процедуре) malloc место в памяти по адресу t
//   Например , новая строка t:    char *t = malloc(strlen(s) + 1);
void strcopy_my(string s, string t);

// ############################################################################

// ****************************************************************************  TOUPPER_MY
// Возвращает переданный символ английского алфавита в заглавном виде
// Returns given char of english alphabet in Upper Case
char toupper_my(char c);

// ############################################################################

// ****************************************************************************  TOLOWER_MY
// Возвращает переданный символ английского алфавита в прописном виде
// Returns given char of english alphabet in LowerCase
char tolower_my(char c);

// ############################################################################

// ****************************************************************************  TOUPPERSTRING_MY
// Конвертирует все английские символы в переданной строке в заглавные буквы
// Conversion of every letter in THE given string to UpperCase
void toupperstring_my(char *s);

// ############################################################################

// ****************************************************************************  TOLOWERSTRING_MY
// Конвертирует все английские символы в переданной строке в прописные буквы
// Conversion of every letter in THE given string to LowerCase
void tolowerstring_my(char *s);

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

string getstring_my(string prompt);

// ############################################################################


// ****************************************************************************  ATOI_MY
// RECURSIVE !    Atoi  inspred by cs50 2023 course, lecture .. , t = ..
// procedure keeps calling itself, OS putting it copies on the stack? with deminishing string (-1)
// while it meets the DEFAULT CASE = one symbol
int atoi_my(char *s);

// ############################################################################

int getint_my(string prompt);
