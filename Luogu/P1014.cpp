//1014
#include<bits/stdc++.h>
using namespace std;
int main(){//��ʼ����һ��Ҫע��!! 
	int i,m=1,n=1,x; bool k; //mΪ�� nΪ�� 
	k=false; //false�����ϣ�true������
	cin>>x; 
	for (i=1;i<=x-1;i++){cout<<i<<' '<<m<<'/'<<n<<endl;
		switch(k){
			case false:{
				n++;
				if (m==1) k=true;
				if (m!=1) m--;
				break;
			}
			case true:{
				m++;
				if (n==1) k=false;
				if (n!=1) n--;
				break;
			}
		}
		cout<<i<<' '<<m<<'/'<<n<<endl;	
	}
	cout<<m<<'/'<<n<<endl;
	return 0;
}
