//P7910
#include <bits/stdc++.h>
using namespace std;
struct data{
    int num;
    int index;
};
bool cmp1(const data &a,const data &b){
    if (a.num<b.num) return 1;
    else return 0;
}
bool cmp2(const data&a,const data&b){
    if (a.index<b.index) return 1;
    else return 0;
}
int main()
{
    data a[8001];
    string input;
    int ans[8001];
    int n,Q,cztype,x,v,f=0,k,t;
    scanf("%d %d\n",&n,&Q);
    for(int i=1;i<=n;i++) {
        scanf("%d ",&a[i].num);
        a[i].index=i;
    }
    t=0;
    sort(a+1,a+n+1,cmp1); f=1;
    for(int i=1;i<=n+1;i++){
        getline(cin,input);
        if (input=="\n") continue;
        x=0;v=0;
        if (input[0]=='1'){
            for(k=2;input[k]!=' ';k++){
            x=x*10+input[k]-'0';
            }
            for(k=k+1;input[k]!='\0';k++){
            v=v*10+input[k]-'0';
            }
            sort(a+1,a+n+1,cmp2);
            f=0;
            // scanf("%d %d\n",&x,&v);
            a[x].num=v;
        }
        else if (input[0]=='2'){
            t++;
            for(k=2;input[k]!=' '&&input[k]!='\0';k++){
            x=x*10+input[k]-'0';
            }
            // scanf(" %d\n",&x);
            if (!f) { sort(a+1,a+n+1,cmp1); f=1;}
            for(int j=1;j<=n;j++){
                if (a[j].index==x){
                    ans[t]=j;
                    break;
                }
            }
        }
    }
    for(int i=1;i<=t;i++)
    printf("%d\n",ans[i]);
    return 0;
}
