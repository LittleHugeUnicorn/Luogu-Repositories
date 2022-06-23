//T2021
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,*p,i=0,x=1,k=1; 
    //i为循环变量，x为等待填的数字
    //k为经过0的个数，k为1跳过这个0，k为-1填上这个0
    cin>>n;
    p=new int[n];
    for (int i=0;i<n;i++) p[i]=0;
    while(x<=n){
        i=(i+1)%n; //由于取模的关系，实际上最后一张牌存在p[0]中
        if ((!p[i])&&(k==1)) k=-1;
        else if ((!p[i])&&(k==-1)){
            k=1;
            p[i]=x;
            x++;
        }
    }
    for(int i=1;i<n;i++) cout<<p[i]<<" ";
    cout<<p[0];
    return 0;
}
