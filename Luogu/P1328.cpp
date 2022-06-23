//P1328 
#include <bits/stdc++.h>
using namespace std;
int f[5][5]={0,0,1,1,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,1,1,1,0,0,0};
//储存规则 f[i][j]指i对j

int main()
{
    int n,na,nb,ma=0,mb=0,k1,k2;
    int da[200]={0},db[200]={0};
    
    cin>>n>>na>>nb;
    for (int i=0;i<na;i++) cin>>da[i];
    for (int i=0;i<nb;i++) cin>>db[i];
    for (int i=0;i<n;i++){
        k1=da[i%na];
        k2=db[i%nb];
        ma+=f[k1][k2];
        mb+=f[k2][k1];
    }
    cout<<ma<<" "<<mb;
    return 0;
}
