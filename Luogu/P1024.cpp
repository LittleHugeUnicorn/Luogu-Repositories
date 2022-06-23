//1024
#include <bits/stdc++.h>
using namespace std;
double f(double a,double b,double c,double d,double x){
    return (a*x*x*x+b*x*x+c*x+d);
}
int main()
{
    double x[3],a,b,c,d,num;
    int i,tot=0;
    cin>>a>>b>>c>>d;
    for (int i=-10000;i<=10000;i++){
        num=i/100.;
        if (f(a,b,c,d,num-0.005)<=0&&f(a,b,c,d,num)>0) x[tot++]=i;
        if (f(a,b,c,d,num-0.005)>=0&&f(a,b,c,d,num)<0) x[tot++]=i;
        if (f(a,b,c,d,num)<0&&f(a,b,c,d,num+0.005)>0) x[tot++]=i;
        if (f(a,b,c,d,num)>0&&f(a,b,c,d,num+0.005)<0) x[tot++]=i;
        if (f(a,b,c,d,num)==0) x[tot++]=i;
    }
    cout<<fixed<<setprecision(2)<<(x[0]/100.)<<" "<<(x[1]/100.)<<" "<<(x[2]/100.)<<endl;
    return 0;
}
