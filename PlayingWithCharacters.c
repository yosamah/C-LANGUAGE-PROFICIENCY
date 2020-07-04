#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char st[100];
    char sent[100];


    scanf(" %c", &ch);
    scanf(" %s", st);
    scanf("\n");
    scanf("%[^\n]%*c", sent);

   


    printf("%c \n", ch);
    printf("%s", st);
    printf("\n");
    fprintf(stdout, sent);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
