#include "../lib/tlpi_hdr.h"

// The enviroment list can be accessed using the global variable
// char **environ
// The C-runtime startup code defines this variable and assigns the location of the environment list to it
extern char **environ;

int main(int argc, char *argv)
{
    char **ep;

    for (ep = environ; *ep != NULL; ep++)
        puts(*ep);

    exit(EXIT_SUCCESS);
}