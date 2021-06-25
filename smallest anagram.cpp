#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ul;

string test(string s,string p)
{
    ll arr1[26]={0},arr2[26]={0};
    for(ll i=0;i<p.size();i++)
    {
        arr1[int(p[i])-int('a')]++;
    }
    for(ll i=0;i<s.size();i++)
    {
        arr2[int(s[i])-int('a')]++;
    }
    for(ll i=0;i<26;i++)
    {
        arr2[i]-=arr1[i];
    }
    s="";
    for(ll i=0;i<26;i++)
    {
        if(arr2[i]>0)
        {
            while(arr2[i]>0)
            {
                s+=char(i+int('a'));
                arr2[i]--;
            }
        }
    }
    int flag=0;
    int j=0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]>p[j])
        {
            s.insert(i,p);
            flag=1;
            break;
        }
        else if(s[i]==p[0])
        {
            while(p[0]==p[j] && j<p.size())
            {
                j++;
            }
            if(p[j]<=p[0])
            {
                s.insert(i,p);
                flag=1;
                break;
            }
            else
            {
                while(s[i]<=p[0])
                {
                    i++;
                }
                s.insert(i,p);
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        s.insert(s.size(),p);
    }
    return s;
}
int main(void)
{
	ll t;
	string s , p;
	cin>>t;
	for(ll c=0;c<t;c++)
	{
	    cin>>s>>p;
	    cout<<test(s,p)<<endl;
	}
	return 0;
}
