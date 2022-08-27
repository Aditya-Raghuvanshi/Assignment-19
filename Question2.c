/*Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user.*/
#include<stdio.h>
#include<string.h>

int main()
{
    char a[10][20];
    int i,j,l,k;
    printf("enter ten strings as city names ");
    for(i=0;i<10;i++)
    {
        fgets(a[i],20,stdin);
    }
    for(k=1;k<10;k++)
    {
        for(i=0;i<=9-k;i++)
      {
        j=i+1;
        if(strcmp(a[i],a[j])>0)
        {
            char temp[20];
            strcpy(temp,a[i]);
            strcpy(a[i],a[j]);
            strcpy(a[j],temp);
        }
      }
    }
    printf("Sorted array is : ");
    for(i=0;i<10;i++)
    {
        printf("%s",a[i]);
    }
    return 0;





}
