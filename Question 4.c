//Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>

int main()
{
    char a[4][20]={"mumbai","indore","jabalpur","kanpur"},b[20];
    int i,j,L,L1;
    printf("enter the you want to search ");
    fgets(b,20,stdin);
    L1=strlen(b);
    for(i=0;i<4;i++)
    {
        L=strlen(a[i]);
        if(L==L1-1)
        {
           for(j=0;b[j]!='\0';j++)
           {
               if(a[i][j]==b[j])
                   continue;
               else
                  break;
           }
           if(j==L)
           {
               printf("string found and it is at %d index ",i);
               break;
           }
        }
    }
    if(i==4)
    {
        printf("string not found in the given list");
    }
    return 0;
}
