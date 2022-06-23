//2043
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,num;
    int a[10001]={0};
    cin>>n;
    for (int i=2;i<=n;i++){
        num=i;
        for (int j=2;j<=i;j++){
            while (num%j==0) {a[j]++; num/=j;}
        }
    }
    for (int i=2;i<=n;i++){
        if (a[i]!=0) cout<<i<<' '<<a[i]<<endl;
    }
    system("pause");
    return 0;
}