#include <bits/stdc++.h>
using namespace std;

int p[50002]={0};

int main()
{
    int L,M,N,len,l,r,ans,s,now,k=0;
    cin>>L>>M>>N;
    for (int i=1;i<=M;i++) 
        cin>>p[i];
        l=0;r=L;
    while(l<=r){
        len=(l+r)/2;
        s=0;now=0;
        for (int i=1;i<=M;i++){
            if (p[i]-p[now]<len) s++;
            else now=i;
        }
        if (s<=N) {ans=len; l=len+1;}
        else r=len-1;
    }
    cout<<ans;
    return 0;
}