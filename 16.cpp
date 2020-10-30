#include<iostream>
using namespace std;
int main()
{
    int i,n,a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
    cin>>n;
    int o=6,hh,jj,tt;
    for(i=1;i<=12*n;i++)
    {
        if(i==1)
        {
            a6+=1;
            continue;
        }
        hh=i%12;jj=i/12;tt=jj%100;
        if(hh==0)
        {
            hh=12;
        }
        if(hh==1)
        {
            o=(o+31)%7;
        }
        else if(hh==2)
        {
            o=(o+31)%7;
        }
        else if(hh==3&&jj%4==0&&tt!=0)
        {
            o=(o+29)%7;
        }
        else if(hh==3&&jj%4==0&&tt==0&&jj!=100)
        {
            o=(o+28)%7;
        }
        else if(hh==3&&jj%4==0&&tt==0&&jj==100)
        {
            o=(o+29)%7;
        }
        else if(hh==3&&jj%4!=0)
        {
            o=(o+28)%7;
        }
        else if(hh==4)
        {
            o=(o+31)%7;
        }
        else if(hh==5)
        {
            o=(o+30)%7;
        }
        else if(hh==6)
        {
            o=(o+31)%7;
        }
        else if(hh==7)
        {
            o=(o+30)%7;
        }
        else if(hh==8)
        {
            o=(o+31)%7;
        }
        else if(hh==9)
        {
            o=(o+31)%7;
        }
        else if(hh==10)
        {
            o=(o+30)%7;
        }
        else if(hh==11)
        {
            o=(o+31)%7;
        }
        else if(hh==12)
        {
            o=(o+30)%7;
        }
        if(o==0)
        {
            a0+=1;
        }
        if(o==1)
        {
            a1+=1;
        }
        if(o==2)
        {
            a2+=1;
        }
        if(o==3)
        {
            a3+=1;
        }
        if(o==4)
        {
            a4+=1;
        }
        if(o==5)
        {
            a5+=1;
        }
        if(o==6)
        {
            a6+=1;
        }
    }
    cout<<a6<<" "<<a0<<" "<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5<<endl;
    return 0;
}
