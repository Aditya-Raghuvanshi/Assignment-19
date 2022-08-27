/*Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user.*/
#include<stdio.h>
#include<string.h>

int main()
{
    char a[5][20],i;

    for(i=0;i<5;i++)
    {
        printf("enter the %d string ",i+1);
        fgets(a[i],20,stdin);
        num_vowels(a[i],i);
    }

    return 0;
}
void num_vowels(char b[],int n)
{
    int l,i,count=0;
    l=strlen(b);
    for(i=0;i<=l-2;i++)
    {
        if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
        {
            count++;
        }
    }
    printf("\n no. of vowels in %d string is %d \n",n+1,count); //this will also count repeating vowels.
}
