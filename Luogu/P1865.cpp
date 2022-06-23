#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,num=0,l[1001],r[1001],tot; int *IsPrime; int *Prime;
    cin>>n>>m;
    IsPrime=new int[m+1];
    Prime=new int[m/2+1];
    IsPrime[1]=0;
    for (int i=2;i<=m;i++) IsPrime[i]=1;
    for (int i=2;i<=m;i++){
        if (IsPrime[i]) Prime[++num]=i; 
        for (int j=1;j<=num&&Prime[j]*i<=m;j++) {
            IsPrime[Prime[j]*i]=0;
            if (i%Prime[j]==0) break;
        }
    }
    for (int i=1;i<=n;i++)
       cin>>l[i]>>r[i];
    for (int i=1;i<=n;i++){
       if (l[i]>=1&&l[i]<=r[i]&&r[i]<=m){
           tot=0;
           for (int j=l[i];j<=r[i];j++)
           if (IsPrime[j]) tot++;
           cout<<tot<<endl;
       } 
       else cout<<"Crossing the line"<<endl;
    }
    delete []IsPrime;
    delete []Prime;
    return 0;
}
