//1309 使用归并排序
#include <bits/stdc++.h>
using namespace std;
struct data{
    int index;//编号
    int score;//得分
    int power;//实力
};
data d[210000],w[105000],l[105000];int n;
bool cmp(data a,data b){
    if (a.score!=b.score) return (a.score>b.score);
    else return (a.index<b.index);
}
void battle(){
    //cout<<"done"<<endl;
    int lw=0,ll=0,ld;
    for (int i=1;i<n*2;i+=2){
        if (d[i].power>d[i+1].power)
        {
            d[i].score++;
            w[++lw]=d[i];
            l[++ll]=d[i+1];
        }
        else
        {
            d[i+1].score++;
            w[++lw]=d[i+1];
            l[++ll]=d[i];
        }
    }
        lw=1,ll=1,ld=1;
    while(lw<=n&&ll<=n)
    {
        if (cmp(w[lw],l[ll])) d[ld++]=w[lw++];
        else d[ld++]=l[ll++];
        }
    while(lw<=n) d[ld++]=w[lw++];
    while(ll<=n) d[ld++]=l[ll++];
}
int main()
{
    int r,q;
    cin>>n>>r>>q;
    for (int i=1;i<=(2*n);i++) {cin>>d[i].score; d[i].index=i;}
    for (int i=1;i<=(2*n);i++) cin>>d[i].power;
    sort(d+1,d+2*n+1,cmp);
    for (int i=1;i<=r;i++) battle();
    
    cout<<d[q].index<<endl;
    return 0;
}
