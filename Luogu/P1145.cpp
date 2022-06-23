#include <bits/stdc++.h>//1145
using namespace std;

int main()
{
    int k,m,begin,x; bool flag=0,b=0;
    cin>>k;
    m=k;
    while(!flag){
        begin=0;
        flag=1;
        for (int i=0;i<k;i++){
            x=(begin+m)%(2*k-i);
            if (x>=k) begin=x;
            else {flag=0;break;}
        }
        m++;
    }
    cout<<m;
    return 0;
}