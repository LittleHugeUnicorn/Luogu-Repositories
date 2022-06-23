//1048
#include<bits/stdc++.h>
using namespace std;
void max(int a,int b){return (a>b?a:b);}
int main(){
    int herbprize[101]={0};
    int herbtime[101]={0};
    int dp[21][21]={0};
    int t,m;
    cin>>t>>m;
    for (int i=0;i<m;i++){
        cin>>herbtime[i]>>herbprize[i];
    }

    system("pause");
    return 0;
}