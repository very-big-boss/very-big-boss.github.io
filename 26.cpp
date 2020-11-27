
#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int h2o(string a)
{
	bool k=0;
	if(a[0]=='-')
		k=1;
	reverse(a.begin(), a.end());
	stringstream ss;int h;
	ss<<a;ss>>h;ss.clear();
	if(k==0)
		return h;
	else
		return -h;
}
int main()
{
	string a[6];
	for(int i=0;i<=5;i++)
		cin>>a[i];
	for(int i=0;i<=5;i++)
		cout<<h2o(a[i])<<endl;
	return 0;
}
