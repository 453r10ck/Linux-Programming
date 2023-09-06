#include <stdio.h>
#include <stdlib.h>

char gloBuf[65535]; // Uninitialized data segment
int primes[] = { 2, 3, 5, 7 }; // Initialized segment

static int square(int x) // Allocated in frame for square()
{
    int result;
    result = x * x;

    return result;
}

static void doCalc(int val)
{
    printf("The square of %d is %d\n", val, square(val));

    if (val < 1000) {
        int t;

        t = val * val * val;
        printf("The cube of %d is %d\n", val, t);
    }
}

int main(int argc, char *argv[])
{
    static int key = 9973;
    static char mbuf[10240000];
    char *p;

    p = malloc(1024);

    doCalc(key);

    exit(EXIT_SUCCESS);
}