//1067 多项式输出 恶心的模拟
//需要考虑好多情况！注意不能比如出现+x^1,-1x这种东西！正确应为+x,-x
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;string s;int x;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>x;
        if (!x) continue;
        if (i==1&&x>1) s=s+to_string(x)+"x^"+to_string(n+1-i);
        if (i==1&&x==1) s=s+"x^"+to_string(n+1-i);
        if (i!=1&&i!=n&&x>1) s=s+"+"+to_string(x)+"x^"+to_string(n+1-i);
        if (i!=1&&i!=n&&x==1) s=s+"+"+"x^"+to_string(n+1-i);
        if (i==n&&x>1) s=s+"+"+to_string(x)+"x";
        if (i==n&&x==1) s=s+"+x";
        if (i!=n&&x<-1) s=s+to_string(x)+"x^"+to_string(n+1-i);
        if (i!=n&&x==-1) s=s+"-x^"+to_string(n+1-i);
        if (i==n&&x<-1) s=s+to_string(x)+"x";
        if (i==n&&x==-1) s=s+"-x";
    }
    cin>>x;
    if (x&&x>0) s=s+"+"+to_string(x);
    if (x&&x<0) s=s+to_string(x);
    cout<<s;
    return 0;
}
