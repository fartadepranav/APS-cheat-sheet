#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char task[10000][10];

int a=0,freq[10000]={0};
void sort(int n);

void main()
{
    int i,j,k,cnt,t,n;
    char z='n';
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%s",&task[j]);
        }

        for(j=0;j<n;j++)
        {
            printf("%s   ",task[j]);
        }

        for(j=0;j<n;j++)
        {
            cnt=1;
            printf("\n inside for loop");
            if(strcmp('0',task[j])==0)
            {
                printf("inside if");
            }
            else
            {
                printf("inside else");
                for(k=j+1;k<n;k++)
                {
                    if(strcmp(task[j],task[k])==0)
                    {
                        cnt++;
                        task[k][0]='n';
                    }
                }
                freq[j]=cnt;
            }
        }
        sort(n);
        for(j=0;j<n;j++)
        {
            printf("%d\t%s",freq[j],task[j]);
        }
    }
}
void sort(int n)
{
    int i,j,temp;
    char te[10];
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(freq[i]>freq[j])
            {
                temp=freq[i];
                freq[i]=freq[j];
                freq[j]=temp;

                strcpy(task[i],te);
                strcpy(freq[j],freq[i]);
                strcpy(te,task[j]);
            }
        }
    }
}
