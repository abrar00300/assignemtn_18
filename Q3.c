#include<stdio.h>
int  compare(char[],char[]);
int main()
{
    char s[40],s2[40];
    printf("Enter first string =");
    fgets(s,40,stdin);
    printf("Enter second string =");
    fgets(s2,40,stdin);
    if(compare(s,s2)==0)
        printf("\n %s \tis smaller than %s ",s2,s);
    else
        printf("\n %s \tis smaller than %s ",s,s2);
    return 0;
}
int  compare(char s[],char s2[])
{
    for(int i=0;s[i];i++)
    {
        if(s[i]>s2[i])
            return 0;
        else if(s[i]==s2[i])
            continue;
        else
            return 1;
    }
}
