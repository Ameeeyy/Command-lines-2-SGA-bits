#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>

int main() {
    pid_t pid;

    for(int i = 0; i < 3; i++) {

        pid = fork();

        if(pid == 0) {
            printf("Child Process %d started. PID = %d\n", i + 1, getpid());

            if(i == 2) {
                sleep(10);
            } else {
                sleep(2);
            }

            printf("Child Process %d finished.\n", i + 1);
            exit(0);
        }
    }

    sleep(3);

    printf("Checking child processes...\n");

    kill(pid, SIGTERM);

    while(wait(NULL) > 0);

    printf("All child processes completed. No zombie processes remain.\n");

    return 0;
}