#include<stdio.h>
#include<string.h>
int pelin(char[]);
int main()
{
    char s[50];
    printf("enter string =");
    fgets(s,50,stdin);
    if(0==pelin(s))
        printf("String is pellindrome");
    else
        printf("String is not pellindrome");
    return 0;
}
int pelin(char s[])
{
    int j,i;
   for(int i=0,j=strlen(s)-2;i<j;i++,j--)
   {
           if(s[i]!=s[j])
            return 1;
   }
   return 0;
}
