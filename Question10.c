//10. Create an authentication system. It should be menu driven.
#include<stdio.h>
#include<string.h>

int main()
{
    char user_name[7][20]={"aditya_531","varun_531","prince_531","rahul_531"};
    char password[7][20]={"aditya@123","varun@123","prince@123","rahul@123"};
    char b[20],c[20];
    int i,k=1,j,L,L1,x,y;
    while(k!=0)
    {
        int choice;
        printf("for doing registration press 1\n");
        printf("for doing login press 2\n");
        printf("for exit press 3\n");
        printf("now enter your choice ");
        scanf("%d",&choice);
        getchar();
        printf("\n");
        switch(choice)
        {
        case 1 :
            printf("Set the user name ");
             for(i=0;i<7;i++)
             {
                 if(user_name[i][0]==0)
                 {
                     scanf("%s",&user_name[i][j]);
                     break;
                 }
             }
             printf("Set the Password ");
             for(i=0;i<7;i++)
             {
                 if(password[i][0]==0)
                 {
                     scanf("%s",password[i]);
                     break;
                 }
             }
             printf("\n");
             break;
        case 2 :
            printf("enter your user name \n");
            fgets(b,20,stdin);
            printf("enter your password \n");
            fgets(c,20,stdin);
            L1=strlen(b);
            for(i=0;i<7;i++)
            {
               x=i;
               L=strlen(user_name[i]);
               if(L==L1-1)
               {
                   for(j=0;j<L;j++)
                   {
                       if(user_name[i][j]==b[j])
                            continue;
                       else
                          break;
                   }
                   if(j==L)
                   {
                       break;
                   }

               }
            }
            L1=strlen(c);
            for(i=0;i<7;i++)
            {
               y=i;
               L=strlen(password[i]);
               if(L==L1-1)
               {
                   for(j=0;j<L;j++)
                   {
                       if(password[i][j]==c[j])
                            continue;
                       else
                          break;
                   }
                   if(j==L&&x==y)
                   {
                       printf("Valid\n\n");
                       break;
                   }
               }
            }
            if(i==7)
                printf("user name or password is not valid \n\n");
            break;

        case 3:
            printf("Exit ");
            break;
        }
        if(choice==3)
            break;

    }
    return 0;

}
