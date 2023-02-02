#include<stdio.h>
#include<string.h>

#define MAX 100 

void repalacechar(char Help[])
{
    for (int i = 0; i < strlen(Help); i++)
    {
        switch (Help[i])
        {
        case '!':
            Help[i]='i';
            break;
        case '0':
            Help[i]='o';
            break;
        case '2':
            Help[i]='z';
            break;
        case '3':
            Help[i]='e';
            break;
        case '7':
            Help[i]='r';
            break;
        case '9':
            Help[i]='g';
            break;
        default:
            break;
        }
    }       
}

int main(int argc, char **argv)
{
    char zkette1[MAX];
    char zkette2[MAX];

    strncpy(zkette1, argv[1], MAX);
    strncpy(zkette2, argv[2], MAX);

    printf("der erste :%s \n le deuxieme : %s\n", zkette1, zkette2);
    
    repalacechar(zkette1);
    repalacechar(zkette2);

    printf("----------------Nach ----replacechar()----------------------\n");
    printf("der erste :%s \n le deuxieme : %s\n", zkette1, zkette2);

    int i = 0;
    do
    {
        if (zkette1[i] != '\0')
        {
            putchar(zkette1[i]);
        }
        if (zkette2[i] != '\0')
        {
            putchar(zkette2[i]);
        }
        i++;
    } while (i < MAX);
    
    printf("\n");
    return 0;
}