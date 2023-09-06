#define _GNU_SOURCE
#include "../lib/tlpi_hdr.h"
#include <stdlib.h>
#include "../lib/error_functions.h"

extern char **environ;

int main(int argc, char *argv[])
{
    int j;
    char **ep; // environment pointer

    clearenv(); // Erase entire environment (default func)

    for (j = 1; j < argc; j++)
        if (putenv(argv[j]) != 0)
            errExit("putenv: %s", argv[j]);

    if (setenv("GREET", "Hello Wolrd", 0) == -1)
        errExit("setenv");

    unset("BYE");

    for (ep = environ; *ep != NULL; ep++)
        puts(*ep);

    exit(EXIT_SUCCESS);
}