#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,n,heap[20],temp;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&heap[i]);
    }

    for(i=n;i>=1;i--)
    {
        bottomup(heap,i);
        temp=heap[1];
        heap[1]=heap[i];
        heap[i]=temp;
    }
    printf("The sorted elements are :");
    for(i=1;i<=n;i++)
    {
        printf("%d  ",heap[i]);
    }
}

bottomup(int heap[], int n)
{
    int i,j,k,value,h;
    for(i=n/2;i>=1;i--)
    {
        k=i;
        value=heap[k];
        h=0;
        while(h==0 && 2*k<=n)
        {
            j=2*k;
            if (j<n && heap[j]< heap[j+1])
                j++;
            if(value >= heap[j])
                h=1;
            else
            {
                heap[k]=heap[j];
                k=j;
            }
        }
        heap[k]=value;
    }
}









