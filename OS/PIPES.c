#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MSGSIZE 16

int main() {
    char* msg1 = "hello, world #1";
    char* msg2 = "hello, world #2";
    char* msg3 = "hello, world #3";
    
    char inbuf[MSGSIZE];
    int p[2], i;

    // Create pipe
    if (pipe(p) < 0) {
        perror("pipe error");
        exit(1);
    }

    // Write 3 messages to pipe
    write(p[1], msg1, MSGSIZE);
    write(p[1], msg2, MSGSIZE);
    write(p[1], msg3, MSGSIZE);

    // Read from pipe 3 times
    for (i = 0; i < 3; i++) {
        read(p[0], inbuf, MSGSIZE);
        printf("%s\n", inbuf);
    }

    return 0;
}
