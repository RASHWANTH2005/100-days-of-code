#include <stdio.h>

int main(void) {

int t,temp=0;
scanf("%d\n",&t);

while(t--)
{
   int n;
   scanf("%d",&n);
   char s[n];
   scanf("%s",s);
   int i=0,count =0;;
   while(i<n)
   {
   int v = s[i];
       if(v=='a' ||v=='e'||v=='i'||v=='o'||v=='u')
       {
 
           
            count=0;
            temp=0;
         
       }
       
       else
       {
          count++;
           if(count >=4)
           {
               temp=1;
               break;
        }
        else
        {
           temp=0;
        }
    }
    i++;
}

if(temp==1)
{
   printf("NO\n");
}

else
{
   printf("YES\n");
}

}
}
