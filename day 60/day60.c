#include<string.h>
#include<stdio.h>
int main(void)
{
    char s[101];
    for(scanf("%*d");~scanf("%s",s);)
    {
        int l=strlen(s),a[26]={0},sum=0;
        for(int i=0;i<l;i++)
        a[s[i]-'a']++;
        for(int i=0,p=1;i<26;i++)
        {
            if(a[i]!=0)
            {
                sum+=((i+1)*a[i]*(a[i]+p*2-1)/2);
                p+=a[i];
            }
        }
        printf("%d\n",sum);
    }
	return 0;
}
