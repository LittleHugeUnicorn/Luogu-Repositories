#include <bits/stdc++.h>
using namespace std;
struct vltr{
    int index;
    int score;
};
int cmp(const vltr&a,const vltr&b){
    if (a.score==b.score) return(a.index<b.index);
    else return(a.score>b.score);

}
int main()
{
    int n,m,k,j;
    vltr data[5001];
    cin>>n>>m;
    for (int i=1;i<=n;i++)
    cin>>data[i].index>>data[i].score;
    sort(data+1,data+n+1,cmp);
    k=(int)(m*1.5);
    for (j=k+1;j<=n;j++){
        if (data[j].score<data[k].score) break;
    }
    k=j-1;
    cout<<data[k].score<<" "<<k<<endl;
    for (int i=1;i<=k;i++) cout<<data[i].index<<" "<<data[i].score<<endl;
    return 0;
}
