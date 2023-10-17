#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * generate_password - Generates a random password
 * @password: The buffer to store the generated password
 */
void generate_password(char *password)
{
int i;

srand(time(NULL));

for (i = 0; i < PASSWORD_LENGTH; i++)
{
int random_char = rand() % 62;

if (random_char < 26)
password[i] = 'A' + random_char;
else if (random_char < 52)
password[i] = 'a' + (random_char - 26);
else
password[i] = '0' + (random_char - 52);
}

password[PASSWORD_LENGTH] = '\0';
}

int main(void)
{
char password[PASSWORD_LENGTH + 1];

generate_password(password);

printf("%s\n", password);

return 0;
}
