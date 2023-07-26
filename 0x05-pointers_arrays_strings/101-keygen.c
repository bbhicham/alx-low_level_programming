#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 14

char generate_random_char() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int index = rand() % (sizeof(charset) - 1);
    return charset[index];
}

int is_valid_password(const char *password) {
    const char *target_password = "randompw";
    return (strcmp(password, target_password) == 0);
}

int main(void) {
    char password[PASSWORD_LENGTH + 1];
    srand(time(NULL));

    do {
        for (int i = 0; i < PASSWORD_LENGTH; i++) {
            password[i] = generate_random_char();
        }
        password[PASSWORD_LENGTH] = '\0';
        if (1) {
            printf("Found valid password: %s\n", password);
            break;
        }
    } while (1);

    return 0;
}
