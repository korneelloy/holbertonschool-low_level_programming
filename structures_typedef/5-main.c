#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;
    char x = 'a';

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("%c\n", x);
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->owner, my_dog->age);
    printf("%c\n", x);
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->owner, my_dog->age);
    return (0);
}