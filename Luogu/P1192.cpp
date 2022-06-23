//1192
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    unsigned long long stair[100001]={1,1};
    cin>>n>>k;
    if (n==1) {cout<<"1"<<endl; return 0;}
    for (int i=2;i<=n;i++){
        for (int j=i-1;(j>=(i-k))&&(j>=0);j--){
            stair[i]+=stair[j];
        }
        stair[i]=stair[i]%100003;
        //cout<<i<<" "<<stair[i]<<endl;
    }
    cout<<stair[n];
    system("pause");
    return 0;
}