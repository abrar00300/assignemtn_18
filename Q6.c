#include<stdio.h>
int alpha(char[]);
int main()
{
    char s[50];
    printf("enter string =");
    fgets(s,50,stdin);
    if(alpha(s)==1)
        printf("String is alphanumeric string ");
    else
        printf("String is not a alphanumeric string ");
    return 0;
}
int alpha(char s[])
{
    int a=0,n=0;
    for(int i=0;s[i];i++)
    {
        if(s[i]>='A'&&s[i]<='z')
            a++;
        else if(s[i]>='0'&& s[i]<='9')
            n++;
    }
    if(a!=0&&n!=0)
        return 1;
    else
        return 0;
}
