//21-10-7 洛谷P1303 高精度乘法
#include<bits/stdc++.h>
using namespace std;
const int MAX=4002; //结果存储上限4001位
int main(){
    string a,b;
    int x,y,z,f1=0,f2=0,na,nb,k;
    int c[MAX]={0};
    cin>>a>>b;
    na=a.length(); nb=b.length();
    for (int i=1;i<=nb;i++){
        z=0;
        y=b[nb-i]-'0';
        f1=0;
        for (int j=1;j<=na;j++){
            x=a[na-j]-'0'; 
            z=x*y+f1;
            f1=0;
            //cout<<z<<' ';
            if (z>=10) {f1=z/10;z-=(f1*10);}
            c[MAX+1-i-j]=c[MAX+1-i-j]+z;   
        }
        if (f1!=0) c[MAX-i-na]=c[MAX-i-na]+f1; //很重要！！每次和最前一位进位！！
    }
    for (k=MAX-1;k>=0;k--){ //进位处理
        c[k]+=f2;
        f2=c[k]/10;
        c[k]=c[k]%10;
    }

    for (k=0;k<=MAX-1;k++) if (c[k]!=0) break;
    if (k==MAX) cout<<'0';
    else for (int j=k;j<=MAX-1;j++) cout<<c[j];
    return 0;
}