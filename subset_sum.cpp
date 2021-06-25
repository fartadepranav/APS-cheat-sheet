#include<iostream>
using namespace std;
typedef long long int ll;

int main()
{
    ll i,j,a[1000],ss[1000][1000]={0},sum;
    cin>>sum;
    for(i=1;i<sizeof(a)/sizeof(a[0]);i++)
    {
        for(j=1;j<=sum;j++)
        {
            if(ss[i-1][j] == 1)
            {
                ss[i][j] = 1;
            }
            else
            {
                if(a[i-1]>j)
                    ss[i][j]==0;
                else
                    ss[i][j]=ss[i-1][j-a[i-1]];
            }
        }
    }
    return 0;
}
