//1226 ตÝน้
#include <bits/stdc++.h>
using namespace std;
long long a,b,p;

long long qiumi(int base,int pw){
    long long ans,tmp;
    if (!base) return 0;
    if (!pw) return 1;
    else if (pw==1) return base%p;
    else{
        tmp=qiumi(base,pw/2)%p;
        ans=((tmp*tmp)%p)*(qiumi(base,pw%2)%p);
        return ans%p;
    }
}

int main()
{
    scanf("%lld %lld %lld",&a,&b,&p);
    printf("%lld^%lld mod %lld=%lld",a,b,p,qiumi(a,b));
    return 0;
}
