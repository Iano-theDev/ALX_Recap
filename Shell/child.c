#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av, char **env)
{
    char *cmd = "./child";
    char *arg[] = {NULL, NULL};
    char *env[] = {"Color=BLUE","b=56","RANDOM_PATH=/path/to/something", NULL};

    arg[0] = cmd;

    execve(
        arg[0],
        args,
        env
    );

    return (0);
}