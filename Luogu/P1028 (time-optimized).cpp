//1028 �����Ż� 
#include<bits/stdc++.h>
using namespace std;
int js(int x);
int data[1001]; //�����Ѿ���õ��ӽ�������ٺ�ʱ 

int main(){
	for (int i=1;i<1001;i++){
		data[i]=-1;
	}
	int n;
	cin>>n;
	cout<<js(n)<<endl;
	return 0;
} 
int js(int x){ 
int ans=1;
	if (x==1) return ans;
	for (int i=1;i<=x/2;i++){
		if (data[i]!=-1) ans+=data[i];
		else ans+=js(i); 
	}
	data[x]=ans;
	return ans;
}
