    //P4994
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int M;long long n=2;
    long long a=0,b=1,c;
    cin>>M;
    do{
       c=(a+b)%M;
       if (c==1&&b==0) break;
       a=b;b=c;
       n++;
    }while(1);
    cout<<(n-1);
    return 0;
}
