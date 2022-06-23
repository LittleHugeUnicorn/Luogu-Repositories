#include <bits/stdc++.h>
using namespace std;
const int MAX=1000002;
int main()
{
    string a,t,b;
    int k=0,first=-1,u=0,tot=0,j; bool flag=0;
    getline(cin,a);
    getline(cin,b);
    for (int i=0;i<a.length();i++) if (a[i]>='A'&&a[i]<='Z') a[i]=a[i]-'A'+'a';
    for (j=0;j<b.length();j++) {if (b[j]>='A'&&b[j]<='Z') b[j]=b[j]-'A'+'a';}
    j=0;
    b+=' ';
    do{
        if (b[j]==' '&&!flag) {j++;}
        else if (b[j]!=' '&&!flag) {t="";flag=1;t=t+b[j];u=j;j++;}
        else if (b[j]!=' '&&flag) {t=t+b[j];j++;}
        else if (b[j]==' '&&flag) {
            if (a==t) {
                if (first==-1) first=u;
                t="";j++;tot++;
            }
            else {t="";j++;}
            flag=0;
        }
        // cout<<'\t'<<j<<'\t'<<flag<<'\t'<<t<<'\t'<<a<<endl;
    }while (j<=b.length());
    if (tot==0){cout<<"-1"<<endl;}
    else {cout<<tot<<' '<<first<<endl;}
    return 0;
}
