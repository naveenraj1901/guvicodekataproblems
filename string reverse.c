#include<stdio.h>
#include<string.h>

int main()
{
    char str_input[500];
    gets(str_input);
    int i, length ;
    length=strlen(str_input);
    for(i=length;i>=0;i--)
        printf("%c",str_input[i]);
    return(0);
}
