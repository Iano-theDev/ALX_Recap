#include <stdio.h>
#include <stdlib.h>

void loop()
{
    char *line;
    char **args;
    int status;

    //read the commands entered by the user and
    //parse the commands for the computer to understand the commands
    //execute the commands.

    do {
        printf("%s", "Iano-theDev@root >");
        line = read();
        //args is an array of strings
        args = parse(line);
        

    }while(status);
}


int main(int argc, char** argv)
{
    //load the config files.

    //run an REPL loop(read evaluate print loop)

    //perform any shutdown cleanup.
    return (0);
}