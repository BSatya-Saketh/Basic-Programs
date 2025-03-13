#include<iostream>
#include<cstring>
#include<map>
using namespace std;

int main()
{
	string str;
	cout<<"Enter a string: ";
	cin>>str;
	
	map<char,int> cnt;
	for(int i=0;i<str.length();i++)
	{
		char c = str[i];
		cnt[c]++;
	}
	
	string dist="";
	for(int i=0;i<str.length();i++)
	{
		char c = str[i];
		if(cnt[c] == 1)
			dist = dist+c+",";
	}
	cout<<"Distinct characters are: "<<dist;
}
