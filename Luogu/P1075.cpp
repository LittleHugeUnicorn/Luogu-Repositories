//P1075
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //�����������Ա�ʾ�����������˻�����������ֻ������������
    int n;
    cin>>n;
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0)
        cout<<n/i;
    }
    return 0;
}