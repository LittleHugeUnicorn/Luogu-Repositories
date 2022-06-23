//P1075
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //这个数如果可以表示成两个质数乘积，则其因数只有这两个质数
    int n;
    cin>>n;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0)
        cout<<n/i;
    }
    return 0;
}
