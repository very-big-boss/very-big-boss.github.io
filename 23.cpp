#include<iostream>
using namespace std;
int main()
{
	int p;cin>>p;
	bool k=0,u=0,g=0;
	int a[15][15]={0};
	int i,m,n;
	for(i=1,m=0,n=0;i<=(p*p-p)/2+p;i++)
	{
		a[m][n]=i;
		if(m<p&&n<(p-1)&&m==0&&k==0)
		{
			n+=1;k=1;continue;
		}
		else if(m<p&&n<p&&m==0&&k==1)
		{
			m+=1;n-=1;k=0;g=1;continue;
		}
		else if(m<(p-1)&&n<p&&n==0&&u==0)
		{
			m+=1;u=1;continue;
		}
		else if(m<p&&n<p&&n==0&&u==1)
		{
			n+=1;m-=1;u=0;g=0;continue;
		}
		else if(m!=0&&m!=(p-1)&&n!=0&&n!=(p-1)&&g==0)
		{
			m-=1;n+=1;continue;
		}
		else if(m!=0&&m!=(p-1)&&n!=0&&n!=(p-1)&&g==1)
		{
			m+=1;n-=1;continue;
		}
	}
	for(int t=0,m=0;m<(p-1);m++)
	{
		for(n=0;n<(p-1)-t;n++)
		{
			a[p-1-m][p-1-n]=p*p+1-a[m][n];
		}
		t++;
	}
	for(m=0;m<p;m++)
	{
		bool e=0;
		for(n=0;n<p;n++)
		{
			if(e==1)
			{
				cout<<' '<<a[m][n];continue;
			}
			cout<<a[m][n];e=1;
		}
		cout<<endl;
	}
	return 0;
}
