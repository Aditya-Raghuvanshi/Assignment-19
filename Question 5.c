/*Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out.*/
#include<stdio.h>
#include<string.h>

int main()
{
    char a[4][20]={"aditya@gmail.com","mohit@gmail.com","rohit@gmail.com","rahulgmail.com"};
    int i,j,l;
    for(i=0;i<4;i++)
    {
        l=strlen(a[i]);
        for(j=0;j<=l-1;j++)
        {
            if(a[i][j]==64)
            {
                break;
            }
        }
        if(j==l)
        {
            printf("string which has no @ is %s",a[i]);
        }
    }
    return 0;
}
