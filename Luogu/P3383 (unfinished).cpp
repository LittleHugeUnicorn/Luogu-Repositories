//3383
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,k=6;
    int request[100002]={0};
    int prime[100002]={0,2,3,5,7,11};
    cin>>n>>q;
    for (int i=0;i<q;i++) cin>>request[i];
    for (int i=3;i<=n;i+=2){
        bool flag=true;
	    for (int j=3;j<=sqrt(i);j+=2){	//ע�⣬����ѭ����sqrt(x)���ɣ��Ҵ�������ʼ��ѭ������ÿ�Σ�2ʡʱ 
		if (i%j==0) flag=false;
	    }
        if (flag) prime[k++]=i;
    }
    for (int i=0;i<q;i++) cout<<prime[request[i]]<<endl;
    system("pause");
    return 0;
}