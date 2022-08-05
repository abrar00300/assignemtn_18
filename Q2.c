#include<stdio.h>
#include<string.h>
void revers(char[]);
int main()
{
    char s[40];
    printf("enter string =");
    fgets(s,40,stdin);
    revers(s);
    return 0;
}
void revers(char s[])
{
    strrev(s);
    printf("%s",s);
}
