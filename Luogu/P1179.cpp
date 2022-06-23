//1179
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,ans=0,num,x;
    cin>>l>>r;
    for (int i=l;i<=r;i++){
        num=i;
        while (num){
            x=num%10;
            if (x==2) ans++;
            num/=10;
        }
    }
    cout<<ans;
    return 0;
}
