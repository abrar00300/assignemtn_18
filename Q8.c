#include<stdio.h>
int count(char[]);
int main()
{
    char s[50];
    printf("enter string =");
    fgets(s,50,stdin);
    printf("total number of words in string are %d",count(s));
    return 0;
}
int count(char s[])
{
    int cnt=0;
    for(int i=0;s[i];i++)
    {
        if((s[i]!=32)&&(s[i+1]==32&&s[i-1]!=32)||(s[i+1]=='\0'))
        {
                cnt++;
        }
    }
    return cnt;
}
