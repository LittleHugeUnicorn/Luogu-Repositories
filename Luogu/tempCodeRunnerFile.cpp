//1540
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mem[1001];
    int M,N,r,l,input,ans=0;
    bool flag;
    cin>>M>>N;
    r=1;l=0;
    for (int i=1;i<=N;i++){
        cin>>input;
        flag=1;
        for (int j=r;j<=l;j++){
            if (input==mem[j]) flag=0;
        }
        if (flag){
            mem[l++]=input;
            ans++;
            if (l-r>M) r++;
        }
    }
    cout<<ans;
    return 0;
}
