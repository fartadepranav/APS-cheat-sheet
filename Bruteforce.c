//   BRUTE FORCE / NAIVE METHOD OF STRING MATCHING
#include"stdio.h"
#include"string.h"
void main()
{
    char pat[100],txt[500];
    int x,y,m,n,flg,i,j,k,f2=0;
    printf("Please enter the text :\n");
    gets(txt);
    printf("Please enter the pattern :\n");
    gets(pat);
    m=strlen(txt);
    n=strlen(pat);
    for(i=0;i<=m-n;i++)
    {
        flg=0;
        for(j=0;j<n;j++)
        {
            if(pat[j]==txt[i+j])
            {
                flg++;
                k=i;
            }
                else
                break;
        }
        if(flg==n)
        {
            printf("Pattern is present at index %d. \n",k);
            f2=1;
            break;
        }
    }
    if(f2==0)
        printf("Pattern not found in the given string.\n");
}
