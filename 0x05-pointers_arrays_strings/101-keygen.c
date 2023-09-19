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
    int i;

    srand(time(NULL));
    char psw[PASSWORD_LENGTH + 1];
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        psw[i] = generate_random_char();
    }
    psw[PASSWORD_LENGTH] = '\0';
    printf("Generated password: %s\n", password);

    return 0;
}