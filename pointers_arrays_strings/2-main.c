#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    /** 
    printf("%s\n", s1);
    _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s\n", s1);
    _strncpy(s1, "", 4);
    printf("%s\n", s1);
    */

    _strncpy(s1, "Talk is cheap. Show me the code.\n", 64);
    printf("%s\n", s1);
    return (0);
}
