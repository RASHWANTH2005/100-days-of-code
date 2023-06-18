#include <stdio.h>

int main(void)
{
int t;
scanf("%d",&t);
while(t--)
{
   int n;
   scanf("%d",&n);
   char a[n];
   scanf("%s",a);
   int v=0;
   int k[n];
   for(int i=0;i<n;i++)
   {
       k[i]=0;
      for(int j=0;j<n;j++)
      {
          if(a[i]==a[j])k[i]++;
      }
   }
   for(int i=0;i<n;i++)
   {
       if(k[i]>=2)v++;
   }
  if(v>=1)
  printf("%d\n",n-2);
  else printf("-1\n");
}
return 0;
}
