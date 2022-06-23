//1149
#include <bits/stdc++.h>
using namespace std;
const int MJ_MAX=999;
int num[MJ_MAX+1];
int a[10]={6,2,5,5,4,5,6,3,7,6};
int main()
{
    int x,n,ans=0;
    memset(num,0,sizeof(num));
    num[0]=6;
    for (int i=1;i<=2*MJ_MAX;i++){
        x=i;
        while(x){
            num[i]+=a[x%10];
            x/=10;
        }
    }
    cin>>n;
    for (int i=0;i<MJ_MAX;i++){
        if (2*num[i]+num[2*i]==n-4) ans++;
        for (int j=i+1;j<=MJ_MAX;j++){
            if (num[i]+num[j]+num[i+j]==n-4) {
                ans+=2;
                //printf("%d+%d=%d\n",i,j,i+j);
            }
        }
    }
    cout<<ans;
    return 0;
}
