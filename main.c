#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[250], last[250];

    printf("Enter your first name: ");

    fgets(first, 255, stdin);
    fgets(first, 255, stdin);

    first[strlen(first)-1] = '\0'; 

    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */


    printf("Hello, %s %s!\n", first, last);


    return 0;
}
