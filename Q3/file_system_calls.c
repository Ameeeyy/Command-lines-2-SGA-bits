#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd;

    fd = open("employees.txt", O_CREAT | O_RDWR, 0644);

    write(fd, "101 John\n", 9);
    write(fd, "102 Alice\n", 10);

    lseek(fd, 9, SEEK_SET);

    write(fd, "102 Bob\n", 8);

    char buffer[50];

    lseek(fd, 0, SEEK_SET);

    int n = read(fd, buffer, sizeof(buffer) - 1);

    buffer[n] = '\0';

    printf("%s", buffer);

    close(fd);

    return 0;
}