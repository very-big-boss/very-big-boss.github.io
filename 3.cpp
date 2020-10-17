#include<iostream>
#include<stdio.h>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c,x,y,z,w;
    scanf("%lf,%lf,%lf",&a,&b,&c);
    scanf("%lf,%lf,%lf",&x,&y,&z);
    w=sqrt(pow(a-x,2)+pow(b-y,2)+pow(c-z,2));
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<w<<endl;
    return 0;
}
