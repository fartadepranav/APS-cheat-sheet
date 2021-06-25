#include<iostream>
#include<string>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,a[10000000],lis[10000000],i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    memset(lis, 1, sizeof(lis));
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(a[i]>a[j] && lis[i]<lis[j]+1)
            {
                lis[i]++;
            }
        }
    }
    ll max=0;
    for(i=0;i<n;i++)
    {
        if(lis[i]>max)
        {
            max=lis[i];
        }
    }
    cout<<max;
    return 0;
}
