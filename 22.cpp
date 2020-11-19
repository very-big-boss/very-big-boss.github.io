#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int n,m,i;string ll;bool x=1;
	cin>>n>>ll>>m;
	reverse(ll.begin(),ll.end());
	long long j=0;
	for(i=0;ll[i]!='\0';i++)
	{
		int o;
		if(ll[i]=='0'||ll[i]=='1'||ll[i]=='2'||ll[i]=='3'||ll[i]=='4'||ll[i]=='5'||ll[i]=='6'||ll[i]=='7'||ll[i]=='8'||ll[i]=='9')
		{
			o=ll[i]-'0';
		}
		else if(ll[i]=='A'||ll[i]=='a')
		{
			o=10;
		}
		else if(ll[i]=='B'||ll[i]=='b')
		{
			o=11;
		}
		else if(ll[i]=='C'||ll[i]=='c')
		{
			o=12;
		}
		else if(ll[i]=='D'||ll[i]=='d')
		{
			o=13;
		}
		else if(ll[i]=='E'||ll[i]=='e')
		{
			o=14;
		}
		else if(ll[i]=='F'||ll[i]=='f')
		{
			o=15;
		}
		if(o>=n)
		{
			x=0;break;
		}
		j+=pow(double(n),double(i))*o;
	}
	if(x==1)
	{
		int p,q;string vv;char h[100];
		for(i=0;;i++)
		{
			p=j/m;q=j%m;j=p;
			if(q==0||q==1||q==2||q==3||q==4||q==5||q==6||q==7||q==8||q==9)
			{
				h[i]=q+'0';
			}
			else if(q==10)
			{
				h[i]='A';
			}
			else if(q==11)
			{
				h[i]='B';
			}
			else if(q==12)
			{
				h[i]='C';
			}
			else if(q==13)
			{
				h[i]='D';
			}
			else if(q==14)
			{
				h[i]='E';
			}
			else if(q==15)
			{
				h[i]='F';
			}
			if(j==0)
			{
				h[i+1]='\0';break;
			}
		}
		vv=h;reverse(vv.begin(), vv.end());
		cout<<vv<<endl;
	}
	else if(x==0)
	{
		cout<<-1<<endl;
	}
	return 0;
}
