//T2021
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,*p,i=0,x=1,k=1; 
    //iΪѭ��������xΪ�ȴ��������
    //kΪ����0�ĸ�����kΪ1�������0��kΪ-1�������0
    cin>>n;
    p=new int[n];
    for (int i=0;i<n;i++) p[i]=0;
    while(x<=n){
        i=(i+1)%n; //����ȡģ�Ĺ�ϵ��ʵ�������һ���ƴ���p[0]��
        if ((!p[i])&&(k==1)) k=-1;
        else if ((!p[i])&&(k==-1)){
            k=1;
            p[i]=x;
            x++;
        }
    }
    for(int i=1;i<n;i++) cout<<p[i]<<" ";
    cout<<p[0];
    return 0;
}
