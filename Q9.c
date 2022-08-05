#include<stdio.h>
#include<string.h>
void word(char []);
int main()
{
    char s[50];
    printf("Enter string =");
    fgets(s,50,stdin);
    word(s);
    return 0;
}
void word (char s[])
{
    strrev(s);
    strcat(s," ");
    char w[50]={'\0'},n[50]={'\0'};
    int x=0;
    for(int i=0;s[i];i++)
    {
        if(s[i]==32||s[i]=='\n')
        {
            w[x]=0;
            strrev(w);
            strcat(n,w);
            strcat(n," ");
            x=0;
        }
        else
        {
            w[x]=s[i];
            x++;
        }
    }
    printf("%s",n);
}
