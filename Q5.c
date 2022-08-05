#include<stdio.h>
void lower(char[]);
int main()
{
    char s[40];
    printf("enter your string =");
    fgets(s,40,stdin);
    lower(s);
    return 0;
}
void lower(char s[])
{
     for(int i=0;s[i];i++)
    {
        if(s[i]>=65 && s[i]<=90)
            s[i]=s[i]+32;
    }
    printf("\n lower case of the string is =%s",s);
}

