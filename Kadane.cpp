#include <bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll n,maxs;
	cin>>n;
	ll arr[n],i,sum=0,pos=0,neg=0, maxi = INT_MIN;

	for(i=0;i<n;i++)
	{
	    cin>>arr[i];

		sum += arr[i];
	    if(arr[i]>=0)
            pos++;
        else
            neg++;
	}

	if(pos == n)
	printf("%lld\n",sum);
	else if(neg == n)

	{
	    for(i=0;i<n;i++)
        {
            maxi = max(maxi , arr[i]);
        }
	    printf("%lld\n",maxi);
	}
	else
	{
	    ll left = 0;
	    ll maxs = 0;
	    for(i=0; i<n; i++)
	    {
	        if( left + arr[i] <=0 )
	        {
	            left = 0;
	        }
	        else
	        {
	            left += arr[i];
	            maxs = max(maxs,left);
	        }
	    }
	    printf("%lld\n",maxs);

	}
}
