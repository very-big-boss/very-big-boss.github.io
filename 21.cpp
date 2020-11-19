#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,i;string ll;
	cin>>n>>ll>>m;
	reverse(ll.begin(),ll.end());
	long long j=0;
	for(i=0;ll[i]!='\0';i++)
	{
		int o=ll[i]-'0';
		j+=pow(n,i)*o;
	}
	int p,q;string vv;char h[100];
	for(i=0;;i++)
	{
		p=j/m;q=j%m;j=p;
		h[i]=q+'0';
		if(j==0) break;
	}
	vv=h;reverse(vv.begin(), vv.end());
	cout<<vv<<endl;
	return 0;
}
