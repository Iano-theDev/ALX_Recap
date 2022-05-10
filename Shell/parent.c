#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

extern char **environ;

int main(int ac, char **av, char **env)
{
    char *args[] ={"./child", NULL};
    execve(
        args[0],
        args,
        environ
    );

    return (0);
}