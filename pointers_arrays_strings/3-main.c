#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "test";
    char *f = "te";
    unsigned int n;


    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
