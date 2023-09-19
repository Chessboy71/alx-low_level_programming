#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

char generate_random_char()
{
    int random_choice = rand() % 3;
    if (random_choice == 0)
    {
        return 'A' + rand() % 26; // Uppercase letter
    }
    else if (random_choice == 1)
    {
        return 'a' + rand() % 26; // Lowercase letter
    }
    else
    {
        return '0' + rand() % 10; // Digit
    }
}

int main()
{
    srand(time(NULL)); // Seed the random number generator with the current time

    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    for (int i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = generate_random_char();
    }
    password[PASSWORD_LENGTH] = '\0'; // Null-terminate the password

    printf("Generated password: %s\n", password);

    return 0;
}