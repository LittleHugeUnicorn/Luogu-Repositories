//1003
//�ӵ�n�ŵ�̺���ز��ң��ҵ��Ƿ����ڵ�̺��
//ԭ���ķ����������̺����Ӧ�����ά���鸳ֵ���� 50% RE+TLE
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10001]={0},b[10001]={0},g[10001]={0},k[10001]={0};
    int n,x,y;
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i]>>b[i]>>g[i]>>k[i];
    }
    cin>>x>>y;
    for (int i=n;i>=1;i--){
        if (x>=a[i]&&x<=a[i]+g[i]&&y>=b[i]&&y<=b[i]+k[i])
        {cout<<i;return 0;}
    }
    cout<<"-1";
    return 0;
}
