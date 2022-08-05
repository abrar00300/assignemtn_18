#include<stdio.h>
void repeat(char[]);
int main()
{
    char s[50];
    printf("Enter string =");
    fgets(s,50,stdin);
    repeat(s);
    return 0;
}
void repeat(char s[])
{
    int cnt=0;
    printf("repeated characters are =\n");
    for(int i=0;s[i];i++)
    {
        cnt=0;
        for(int j=i+1;s[j];j++)
        {
            if(s[i]==s[j])
            {
                cnt++;
                s[j]='%';
            }
        }
        if(cnt!=0&&s[i]!=32&&s[i]!='%')
            printf("%c\t",s[i]);
    }
}
