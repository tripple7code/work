#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    char command[100];
    char* args[2];

    while(1) {
        // Display prompt and wait for user input
        printf("$ ");
        fgets(command, 100, stdin);

        // Check for end of file
        if (feof(stdin)) {
            break;
        }

        // Remove newline character
        command[strlen(command)-1] = '\0';

        // Execute command
        args[0] = command;
        args[1] = NULL;
        if (execve(command, args, NULL) == -1) {
            printf("Command not found\n");
        }
    }

    return 0;
}
