//1067 ����ʽ��� ���ĵ�ģ��
//��Ҫ���Ǻö������ע�ⲻ�ܱ������+x^1,-1x���ֶ�������ȷӦΪ+x,-x
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
