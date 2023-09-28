#include <stdio.h>

void login(char *username, char *password)
{
    printf("Username: %s\n", username);
    scanf("%s", username);
    printf("Password: %s\n", password);
    scanf("%s", password);
}


int main()
{
    char username[20];
    char password[20];
    login(username, password);

    return 0;
}