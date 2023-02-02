#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void genPasswd(char *argv[], char passphrase [])
{
    if(!strcmp(argv[0], "./genpass"))
    {
        for (int i = 1; i < strlen(argv); i++)
        {
            strcpy(passphrase,&argv[i][0]);
        }
    }
}

int main(int argc, char **argv)
{
    //char *passphrase = malloc(sizeof(char));

    genPasswd(argv, argc);

}