#ifndef ERROR_FUNCTIONS_H

#define ERROR_FUNCTIONS_H

void errMsg(const char* format, ...); // Print a message on standard error

#ifdef __GNUC__
#define NORETURN __attribute__ ((__noreturn__))
#else 
#define NORETURN
#endif

void errExit(const char* foramt, ...) NORETURN; // like errMsge but also terminate the program
void err_exit(const char* foramt, ...) NORETURN;
void errExitEN(int errnum, const char* format, ...) NORETURN;
void fatal(const char* format, ...) NORETURN;
void usageErr(const char* format, ...) NORETURN;
void cmdLineErr(const char* format, ...) NORETURN;

#endif 