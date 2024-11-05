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
    char *s = "hello, world";
    char *f = "";
    char *t;

    t = _strstr(s, f);
    printf("%p\n", t);
    return (0);
}
