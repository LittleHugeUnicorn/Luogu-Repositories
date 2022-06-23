#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool f[1001]={0};
    int n,tot=0,input;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>input;
        if (!f[input]) tot++;
        f[input]=1;
    }
    cout<<tot<<endl;
    for (int i=1;i<=1000;i++){
        if (f[i]) cout<<i<<" ";
    }
    return 0;
}
