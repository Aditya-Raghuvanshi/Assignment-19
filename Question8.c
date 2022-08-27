/*Given a list of words followed by two words, the task is to find the minimum distance
between the given two words in the list of words.
(Example : s = {"the","quick","brown","fox","quick"}
word1 = the, word2 = fox, OUTPUT : 1 )*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
      char s[5][20]={"the","quick","brown","fox","quick"};
      char w1[20]={"the"}; char w2[20]={"fox"}; 
      int i,x1=-1,x2=-1,min=20000,temp;
      for(i=0;i<5;i++)
      {
        if(strcmp(s[i],w1)==0)
        {
             x1=i;
        }
        if(strcmp(s[i],w2)==0)
        {
            x2=i;
        }
        if(x1!=-1&&x2!=-1)
        {
             temp=abs(x2-x1);
             if(temp<min)
                 min=temp;
        }
      } 
      printf("Minimum distance btw given two words is %d ",min-1);
      return 0;
}
