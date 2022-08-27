//Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>

int main()
{
    char a[5][20];
    int i,j,L,k;
    printf("enter 5 strings ");
    for(i=0;i<5;i++)
    {
        fgets(a[i],20,stdin);
    }
    printf("palindrome strings are : \n");
    for(i=0;i<5;i++)
    {
        L=strlen(a[i]);
        for(j=0,k=L-2;j<=k;j++,k--)
        {
            if(a[i][j]==a[i][k])
                continue;
            else
                break;
        }
        if(j>k)
        {
            printf("%s",a[i]);
        }
    }
    return 0;
}
