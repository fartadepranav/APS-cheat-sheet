#include <stdio.h>

int main() {
	// your code goes here
	int t,n[100],p[100][100],i,j,cnt=0,min=9999;
	scanf("%d",&t);
	    for(i=0;i<t;i++)
	    {
	        scanf("%d",&n[i]);
	        if(n[i]>6 && n[i]<=100)
            {
                for(j=0;j<n[i];j++)
                {
                    scanf("%d",&p[i][j]);
                }
                cnt=0;min=9999;
                if(p[i][0]<min)
                cnt++;
                if(p[i][1]<p[i][0])
                cnt++;
                if(p[i][2]<p[i][0] && p[i][2]<p[i][1])
                cnt++;
                if(p[i][3]<p[i][0] && p[i][3]<p[i][1] && p[i][3]<p[i][2])
                cnt++;
                if(p[i][4]<p[i][0] && p[i][4]<p[i][1] && p[i][4]<p[i][2] && p[i][4]<p[i][3])
                cnt++;
                for(j=5;j<n[i];j++)
                {
                    if(p[i][j]<p[i][j-1] && p[i][j]<p[i][j-2] && p[i][j]<p[i][j-3] && p[i][j]<p[i][j-4] && p[i][j]<p[i][j-5])
                    cnt++;
                }
                printf("%d\n",cnt);
            }
	    }
	return 0;
}
