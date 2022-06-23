#include <bits/stdc++.h>
using namespace std;
//将x分为k份,第一份从b开始
int f(int x,int k,int b);

int main()
{   
    int n,k;
    cin>>n>>k;
    cout<<f(n,k,1);
    return 0;
}

int f(int x,int k,int b)
{   
    //cout<<x<<"\t"<<k<<"\t"<<b<<endl;
    int tot=0;
    if (b>x) return 0;
    if (k==1&&b<=x) return 1;
    for (int i=b;i<=x/k;i++) tot+=f(x-i,k-1,i);
    return tot;
}
