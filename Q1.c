#include<stdio.h>
int len(char[]);
int main()
{
    char s[40];
    printf("enter string =");
    fgets(s,40,stdin);
    printf("length of string is = %d ",len(s)-1);
    return 0;
}
int len(char s[])
{
    int i;
    for(i=0;s[i];i++);
    printf("length of string is %d",i-1);
    return i;
}
