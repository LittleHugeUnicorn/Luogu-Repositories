//1563
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,index,direct,step,p;
    int chaox[10000]; //��ĿҪ����������100000 �������޷�����ô��
    string job[10000];
    cin>>n>>m;
    for (int i=0;i<n;i++){
        cin>>chaox[i]>>job[i];
    }
    index=0;
    for (int i=0;i<m;i++){
        cin>>direct>>step;
        p=chaox[index]+direct;
       // cout<<p<<endl;
        if (p==0||p==2) {
            index-=step;
            if (index<0) index+=n;
        }
        if (p==1) {
            index+=step;
            if (index>=n) index-=n;
        }
        
    }
    cout<<job[index]<<endl;
    system("pause");
    return 0;
}
