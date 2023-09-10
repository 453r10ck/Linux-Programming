#include <pwd.h>
#include <grp.h>
#include <ctype.h>
#include <stdio.h>

char *userNameFromId(__uid_t uid)
{
    struct passwd *pwd;

    pwd = getpwuid(uid);

    return (pwd == NULL) ? NULL : pwd->pw_name;
}