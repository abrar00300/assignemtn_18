#include<stdio.h>
void upper(char[]);
int main()
{
    char s[50];
    printf("Enter string =");
    fgets(s,50,stdin);
    upper(s);
    return 0;
}
void upper(char s[])
{
     for(int i=0;s[i];i++)
    {
        if(s[i]>=97 && s[i]<=122)
            s[i]=s[i]-32;
    }
    printf("\nupper case of the string is =%s",s);
}
