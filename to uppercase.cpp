#include<iostream>
#include<string>
using namespace std;
typedef long long int ll;

int main()
{
    string str;
    cin>> str;
    ll len=str.length(),i;
    for(i=0;i<len;i++)
    {
        str[i] &= (~32);
    }
    return 0;
}
