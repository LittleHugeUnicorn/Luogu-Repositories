#include <bits/stdc++.h>
using namespace std;
struct student{
    int index;
    int CH;
    int MATH;
    int EN;
    int tot;
};
bool cmp(const student &a,const student &b){
    if (a.tot>b.tot) return 1;
    if (a.tot==b.tot){
        if (a.CH>b.CH) return 1;
        if (a.CH==b.CH) {
            if(a.index<b.index) return 1;
        }
    }
    return 0;
}
int main()
{
    student s[10001];
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        s[i].index=i;
        cin>>s[i].CH>>s[i].MATH>>s[i].EN;
        s[i].tot=s[i].CH+s[i].MATH+s[i].EN;
    }
    sort(s+1,s+n+1,cmp);
    for (int i=1;i<=5;i++){
        cout<<s[i].index<<" "<<s[i].tot<<endl;
    }
    return 0;
}
