//1003
//从第n张地毯往回查找，找点是否落在地毯中
//原来的方法是输入地毯给相应区域二维数组赋值，但 50% RE+TLE
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10001]={0},b[10001]={0},g[10001]={0},k[10001]={0};
    int n,x,y;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i]>>b[i]>>g[i]>>k[i];
    }
    cin>>x>>y;
    for (int i=n;i>=1;i--){
        if (x>=a[i]&&x<=a[i]+g[i]&&y>=b[i]&&y<=b[i]+k[i])
        {cout<<i;return 0;}
    }
    cout<<"-1";
    return 0;
}
