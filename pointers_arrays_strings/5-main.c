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
    char *s = "";
    char *f = "rl";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
