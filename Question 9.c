/*Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed*/
#include<stdio.h>
#include<string.h>

int main()
{
    char a[4][20]={"aditya","prince","varun","rahul"},b[20];
    int i,j,L,L1;
    printf("enter your user name ");
    fgets(b,20,stdin);
    L1=strlen(b);
    for(i=0;i<4;i++)
    {
        L=strlen(a[i]);
        if(L==L1-1)
        {
            for(j=0;b[j]!=0;j++)
            {
                if(a[i][j]==b[j])
                    continue;
                else
                    break;
            }
            if(j==L)
            {
                int n,f=1;
                printf("enter any number for cal. factorial ");
                scanf("%d",&n);
                for(int k=n;k!=0;k--)
                {
                    f=f*k;
                }
                printf("factorial of %d is %d ",n,f);

                break;
            }
        }
    }
    if(i==4)
    {
        printf("Error ");
    }
    return 0;
}
