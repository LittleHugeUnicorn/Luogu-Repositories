//1309 使用快排，TLE
#include <bits/stdc++.h>
using namespace std;
struct data{
    int index;//编号
    int score;//得分
    int power;//实力
};
data d[200002];
bool cmp(const data &a,const data &b){
    if (a.score==b.score) return (a.index<b.index);
    return (a.score>b.score);
}
void battle(int n){
    for (int i=1;i<=n;i++){
        if (d[2*i-1].power>d[2*i].power) d[2*i-1].score++;
        else d[2*i].score++;
    }
    sort(d+1,d+2*n+1,cmp);
    // for (int i=1;i<=(2*n);i++) cout<<d[i].score<<" ";
    // cout<<endl;
    return;
}
int main()
{
    int n,r,q;
    cin>>n>>r>>q;
    for (int i=1;i<=(2*n);i++) {cin>>d[i].score; d[i].index=i;}
    for (int i=1;i<=(2*n);i++) cin>>d[i].power;
    sort(d+1,d+2*n+1,cmp);
    for (int i=1;i<=r;i++) battle(n);
    cout<<d[q].index<<endl;
    return 0;
}
