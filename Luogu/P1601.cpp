//21-10-6,Âå¹ÈP1601
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;int na,nb,nc;int x=0,y=0,num=0;bool f=0;
    int c[501]={0};
    cin>>a>>b;
    na=a.length();
    nb=b.length();
    nc=(na>nb?na:nb);
    for (int i=1;i<=nc;i++){
        x=0; y=0;
        if (na-i>=0) x=(int)(a[na-i])-48;
        if (nb-i>=0) y=(int)(b[nb-i])-48;
        num=x+y+f;
        //cout<<nc-i<<' '<<x<<' '<<y<<' '<<num<<endl;
        f=0;
        if (num>=10){f=1;num-=10;}
        c[nc-i]=num;
    }
    if (f) cout<<"1";
    for (int j=0;j<nc;j++) cout<<c[j];
    return 0;
}

