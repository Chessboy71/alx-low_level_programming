#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

char generate_random_char()
{
    int random_choice = rand() % 3;

    if (random_choice == 0)
    {
        return 'A' + rand() % 26;
    } 
    else if (random_choice == 1)
    {
        return 'a' + rand() % 26;
        return '0' + rand() % 10;
    }
}

int main()
{
    return 0;
}