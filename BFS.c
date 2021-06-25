#include<stdio.h>

int a[20][20],q[20],visited[20],n,i,f=0,r=-1;

void bfs(int v)
{
	for (i=1;i<=n;i++)
	  if(a[v][i] && !visited[i])
	   q[++r]=i;
	if(f<=r) {
		visited[q[f]]=1;
		bfs(q[f++]);
	}
}

void main()
{
	int v;
	scanf("%d",&v);
	bfs(v);
	for (i=1;i<=n;i++)
    {
	  if(visited[i])
	    printf("%d\t",i);
    }
    else
	   printf("\n Bfs is not possible");
}
