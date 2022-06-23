//21-10-6 Âå¹ÈP2142 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;int na,nb,nc,k;int x=0,y=0,num=0;bool f=0,sgn=0;
    int c[10087]={0};
    cin>>a>>b;
    na=a.length(); nb=b.length();
    if (nb>na){swap(a,b); sgn=1;}
    if (na==nb && b>a) {swap(a,b); sgn=1;}
    na=a.length(); nb=b.length();
    nc=na;
    for (int i=1;i<=nc;i++){
        x=0; y=0;
        if (na-i>=0) x=(int)(a[na-i])-48;
        if (nb-i>=0) y=(int)(b[nb-i])-48;
        num=x-y-f;
        //cout<<nc-i<<' '<<x<<' '<<y<<' '<<num<<endl;
        f=0;
        if (num<0){f=1;num+=10;}
        c[nc-i]=num;
    }
    if (sgn) cout<<"-";
    for (k=0;k<nc;k++) if(c[k]) break;
    if (k==nc) cout<<0;
    for (int j=k;j<nc;j++) cout<<c[j];
    return 0;
}

