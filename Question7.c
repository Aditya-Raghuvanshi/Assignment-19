//From the list of IP addresses, check whether all ip addresses are valid.
/*If the sub strings are containing any non-numeric character, then return false

If the number in each token is not in range 0 to 255, then return false

If there are exactly three dots and four parts then it is a valid IP address*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char ip[3][20]={"12.13.14.15","131.111.321.123","1.123.3.4"};
    int i,count=-1;
    char* p;
    for(i=0;i<3;i++)
    {
        count=-1;
        p=strtok(ip[i],".");
        while(p!=NULL)
        {
            int x= atoi(p);
            if(x>=0&&x<=255)
            {
                count++;
            }    
            printf("%d ",x);
            p=strtok(NULL,".");
        }
        if(count==3)
        {
            printf(" is valid \n");
        }  
        else
            printf(" is not valid \n");  
    }

    return 0;
}
