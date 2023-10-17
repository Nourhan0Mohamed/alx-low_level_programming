#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 15

/**
 * generate_password - Generates a specific password
 * @password: The buffer to store the generated password
 */
void generate_password(char *password)
{
int i;

for (i = 0; i < PASSWORD_LENGTH; i++)
{password[i] = 'a';
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
