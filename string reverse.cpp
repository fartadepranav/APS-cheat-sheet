//A function to reverse a string and print it
#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;

string reverseStr(string str)
{
	ll len = str.size();
	for(ll i = 0; i < len/2; i++){
		swap(str[i], str[len - 1 - i]);
	}
	return str;
}

int main(){
	string str,ulta;
	getline(cin, str);
	ulta=reverseStr(str);
	cout<<ulta;
	return 0;
}
