#include <iostream>
#include <stdio.h>
#include <cmath>

using   namespace std;

int b[5],d[5],c=0,f[5],r[5];
 float fi[5];

void decimal()
{
    int co=1;
    for(int i=0;i<5;i++)
    {
        if(b[i]==1)
            c+=pow(2,i);
    }
   // f[0]=c*c;
}


int main()
{
    for(int i=0;i<5;i++)
    {
    cout<<"\nInput Binary Numbers(0/1): ";
    for(int i=0;i<5;i++)
        cin>>b[i];
    decimal();
    d[i]=c;
    f[i]=c*c;
    c=0;

    cout<<"\nDecimal: "<<d[i];
    cout<<"\nF(x): "<<f[i];
    }

    float s=0,t=0;
    float a=0,x=0,y=0,z;
    for(int i=0;i<5;i++)
    {
        t+=f[i];
    }
    cout<<"\n\nSum of F(x): "<<t;
    s=t/5;
    cout<<"\nAverage of F(x): "<<s;

    for(int i=0;i<5;i++)
    {
        fi[i]=f[i]/s;
        a+=fi[i];
    }

    x=a/5;
    cout<<"\nSum of Fi(x): "<<a;
    cout<<"\nAvg of Fi(x): "<<x;

     for(int i=0;i<5;i++)
     {
        r[i]=round(fi[i]);
        y+=r[i];
     }

     cout<<"\nSum of Round Values: "<<y;
     cout<<"\nAVG of Round Values: "<<y/5;
    cout<<"\nRound Numbers: ";
    for(int i=0;i<5;i++)
        cout<<" "<<r[i];

    return 0;
}
