#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int t=*a;*a=*b;*b=t;
}
int acs(int a[5][5],int m,int n)
{
	if(m>=0&&m<=4&&n>=0&&n<=4)
	{
		for(int i=0;i<=4;i++)
		{
			swap(&a[m][i],&a[n][i]);
		}
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a[5][5];
	for(int i=0;i<=4;i++)
	{
		for(int u=0;u<=4;u++)
		{
			cin>>a[i][u];
		}
	}
	int m,n;cin>>m>>n;
	if(acs(a,m,n)==0)
	{
		cout<<"error"<<endl;
	}
	else
	{
		for(int i=0;i<=4;i++)
		{
			bool k=0;
			for(int u=0;u<=4;u++)
			{
				if(k==1)
				{
					cout<<' '<<a[i][u];continue;
				}
				cout<<a[i][u];k=1;
			}
			cout<<endl;
		}
	}
	return 0;
}
