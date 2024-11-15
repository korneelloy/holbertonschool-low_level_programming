#include <stdio.h>
#include "dog.h"
#include <stdlib.h> 

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *anotherdog;

    anotherdog = new_dog("Ghost", 4.75, "Jon ccc");
    printf("My name is %s, and I am %.1f :) - %s!\n", anotherdog->owner, anotherdog->age, anotherdog->name);
    free(anotherdog->owner);
    free(anotherdog->name);
    free(anotherdog);

    return (0);
}