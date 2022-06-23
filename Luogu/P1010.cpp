#include <bits/stdc++.h>
using namespace std;
string NumToStr(int num);
string a[20001];
int main()
{
    int n;
    cin>>n;
    a[0]="";a[1]="2(0)";a[2]="2";
    cout<<NumToStr(n);
    return 0;
}

string NumToStr(int num){
    int x=num,tot;
    if (num==0) return "";
    if (num==1) return "2(0)";
    if (num==2) return "2";
    //if (a[num]!="") return a[num];
    tot=0;
    while(num>1){
        num/=2;
        tot++;
    }
    if (tot==1) a[x]="2";
    else a[x]="2("+NumToStr(tot)+")";
    if ((x-pow(2,tot)!=0))
    a[x]=a[x]+"+"+NumToStr(x-pow(2,tot));
    return a[x];
}
