#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int rabin_karp(char pat[])
{
int flag=-1;
 int i,j,x=1,a;
const int q=107;
const int d=256;
char str[7][20]={"mumbai","delhi","hubli","bangalore","Ahmedabad","jaipur","Varanasi"};
for(a=0;a<7;a++)
{
    char text[200];
  strcpy(text,str[a]);
       //printf("%s\n",text);

 int n=strlen(text);
 int m=strlen(pat);
 int t=0,p=0;

 for(i=0;i<m;i++)
 {
  p=(p*d + pat[i])%q;
  t=(t*d + text[i])%q;
 }
 for(i=0;i<m-1;i++)
   x=(x*d)%q;

 for(i=0;i<=n-m;i++)
 {
  if(p==t)
  {
   for(j=0;j<m;j++)
   {
   if(text[i+j]!=pat[j])
     break;
   }
   if(j==m)
   {
     printf("These are related cities to your search:\nselect your choice:\n");
     printf("%d %s\n",a,text);
     flag=0;
   }

  }
  t=(d*(t-text[i]*x)+text[i+m])%q;
  if(t<0)
   t=t+q;
 }

  }
  return flag;
 }

int main()
{
  int k;
 char pat[1000];
 printf("Please enter city name you want to search\n");
 gets(pat);
 k=rabin_karp(pat);
 if(k==-1)
    printf("Source city not found.Try something else");
}
