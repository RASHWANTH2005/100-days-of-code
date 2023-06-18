#include <stdio.h>

int main()
{
int t;
scanf("%d",&t);
while(t--)
{
   int n,count=0;
   scanf("%d",&n);
   char s[n];
   scanf("%s",s);
   int a[26]={0};
   for(int i=0;i<n;i++)
   {
       a[s[i] -97]++;
   }
   for(int i=0;i<26;i++)
   {
       if(a[i]%2==1)
       {
           count=1;
           break;
       }
   }
   
   if(count==1)
   {
       printf("NO\n");
       
   }
   else
   {
       printf("YES\n");
   }
}
return 0;
}
