#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n;cin>>n;
	string a[100];
	for(int i=0;i<=(n-1);i++)
	{
		cin>>a[i];
	}
	sort(a+0,a+n);
	for(int i=0;i<=(n-1);i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
