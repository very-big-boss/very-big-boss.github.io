#include<iostream>
#include<numeric>
using namespace std;
int main()
{
	int n,k,i,s;cin>>n>>k;
	int a[100000]={0};
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(k>=n)
	{
		s=accumulate(a,a+n,0);
		cout<<s<<endl;
	}
	else if(k<n)
	{
		int p,q,x=0;
		for(p=0;p<=k;p++)
		{
			q=k-p;
			s=accumulate(a+0,a+p,0)+accumulate(a+(n-q),a+n,0);
			if(s>x)
			{
				x=s;
			}
		}
		cout<<x<<endl;
	}
	return 0;
}
