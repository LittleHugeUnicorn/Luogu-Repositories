#include <bits/stdc++.h>
using namespace std;
const int MAX_DIG=101;
const int MAX_NUM=51;
int main()
{
    int n,f=0,j,num,k;
    int c[MAX_NUM][MAX_DIG]={0},ans[MAX_DIG]={0};
    cin>>n;
    c[1][MAX_DIG-1]=1;
    ans[MAX_DIG-1]=1;
    for (int i=2;i<=n;i++){
    for (k=0;k<=MAX_DIG-1;k++) if (c[i-1][k]!=0) break;
        num=i;
        if (i>=10) num%=10;
        for (j=MAX_DIG-1;j>=k;j--){
            c[i][j]+=(c[i-1][j]*num+f);
            f=0;
            if (c[i][j]>=10) {f=c[i][j]/10; c[i][j]%=10;}
        }
        c[i][j]=f; f=0;
        if (i>=10) {
            num=i/10;
            for (j=MAX_DIG-2;j>=k-1;j--){
            c[i][j]+=(c[i-1][j+1]*num+f);
            f=0;
            if (c[i][j]>=10) {f=c[i][j]/10; c[i][j]%=10;}
            }
        c[i][j]=f; f=0;
        }
        // for (int kk=0;kk<=MAX_DIG-1;kk++) cout<<c[i][kk];
        // cout<<endl;
    for (j=MAX_DIG-1;j>=0;j--){
        ans[j]+=(c[i][j]);
        if (ans[j]>=10) {ans[j-1]+=(ans[j]/10);ans[j]%=10;}
    }
    }
    for (j=0;j<=MAX_DIG-1;j++) if (ans[j]!=0) break;
    for (int k=j;k<=MAX_DIG-1;k++) cout<<ans[k];
    return 0;
}
