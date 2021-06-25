#include<iostream>
#include<string>
using namespace std;
typedef long long int ll;

int main(string s)
{
    int i1,i2;

    for(int j=s.size() -2;j >= 0;j--)
    {
        if((int)s[j]<(int)s[j+1])
        {
            i1=j;
            break;
        }
    }
    int val=(int)'{';

    if(i1=s.size())
    {
        return "";
    }

    for(int i=i1+1;i<s.size();i++)
    {
        if((int)s[i]>(int)s[i1])
        {
            if((int)s.at(i)<val)
            {
                val=(int)s.at(i);
                i2 = i;
            }
        }
    }

    s = swapString(s,i1,i2);
    sort(s.begin() + i1 + 1, s.begin() + s.size());
    cout << s << endl;
    cout<< s;
    return 0;
}
