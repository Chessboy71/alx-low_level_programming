#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 *@size : size of the array
 *@c : the character to initialize
 *
 *Return: void
 */
char *create_array(unsigned int size, char c)
{
    char *arr = (char *)malloc(size * sizeof(char));
    unsigned int i;

    if (size == 0)
        return NULL;
    for (i = 0; i < size; i++)
        arr[i] = c;
    arr[size] = '\0';
    return (arr);
}