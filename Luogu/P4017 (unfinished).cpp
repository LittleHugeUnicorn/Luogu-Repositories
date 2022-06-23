//P4017
#include<bits/stdc++.h>
using namespace std;
/*
struct swltype{
    int infer;
    int super;
};
inline bool cmp(const swltype &a,const swltype &b){
    if(a.super<b.super) return 1;
    return 0;
}
*/
int main(){
    int n,m,tot,max;
    int swl[5001][2];
    long swlnum[5001];
    swlnum[1]=1;
    cin>>n>>m;
    for (int i=0;i<m;i++) cin>>swl[i][0]>>swl[i][1];
    for (int i=2;i<=n;i++){
        tot=0;
        for (int j=0;j<m;j++){
            if (swl[j][1]==i) tot+=swlnum[swl[j][0]];
        }
        swlnum[i]=tot;//%80112002;
    }
for (int k=1;k<=n;k++) cout<<swlnum[k]<<endl;

    cout<<swlnum[n];
    system("pause");
    return 0;
}