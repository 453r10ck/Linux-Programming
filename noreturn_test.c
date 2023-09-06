#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>

noreturn void fatal_error(void) {
    exit(3);
}

_Noreturn void not_coming_back(void) {
    puts("There is no coming back");
    fatal_error();
    return;
}

void done(void) {
    puts("We'll never get herer");
}

int main(void) {
    not_coming_back();
    done();

    return 0;
}