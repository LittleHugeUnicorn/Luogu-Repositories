//P7909 CSP-J 2021
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,L,R,max,x;
    max=INT_MIN;
    scanf("%d %d %d",&n,&L,&R);
    for(int i=L;i<=(R>(L+n)?(L+n):R);i++){
        x=i%n;
        if (x>max) max=x;
        if (x==n-1) break;
    }
    cout<<max;
    return 0;
}
