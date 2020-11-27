#include<iostream>
#include<string>
#include<algorithm>
#include<stdlib.h>
using namespace std;
string h2o(string a)
{
	if(a=="0"||a=="-0")
	{
		return "0";
	}
	else
	{
		if(a[0]=='-')
		{
			a[0]='\0';a=a+'-';
		}
		reverse(a.begin(), a.end());
		for(int i=0;i<=a.size();i++)
		{
			if(a[i]=='0')
			{
				a[i]='\0';
			}
			if(a[i]!='0'&&a[i]!='\0'&&a[i]!='-')
			{
				break;
			}
		}
		return a;
	}
}
int main()
{
	string a[6];
	for(int i=0;i<=5;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<=5;i++)
	{
		string k=h2o(a[i]);
		char l[100]={'\0'};
		for(int i=0,u=0;i<=k.size()-1;i++)
		{
			if(k[i]=='\0')
			{
				continue;
			}
			l[u]=k[i];u+=1;
		}
		int g=atoi(l);
		cout<<g<<endl;
	}
	return 0;
}
