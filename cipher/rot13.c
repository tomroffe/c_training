#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

/*
 *  @brief Rot13 Cipher
 *  @param s contains the string to be rot'ed
 * */
void rot13(char *s) {
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = 'A' + ((s[i] - 'A' + 13) % 26);
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = 'a' + ((s[i] - 'a' + 13) % 26);
        }
    }
}


/*
 *  @brief Main function
 *  @returns 0 on exit
 * */
int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("No plain-text passed. Exiting!\n");
        exit(EXIT_FAILURE); 
    } else {
        char text[255];
        if (strlen(argv[1]) >= sizeof(text)) {
            printf("plain-text too long! Exiting\n");
            exit(EXIT_FAILURE); 
        } else {
            strcpy(text, argv[1]);
        }
        printf("plain-text: %s\n", text);
        rot13(text);
        printf("ciper-text: %s\n", text);
    }
    return 0;
}
