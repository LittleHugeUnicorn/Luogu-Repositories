//1036
#include <bits/stdc++.h>
using namespace std;
const int M=100000000;
void searchprime();
//fsum��������index��ʼѰ��k��,�ӵ�sum��
void fsum(int index,int k,int sum);

bool isprime[M+10];
int prime[M/2],num=0,tot=0,n,k;
int a[21]={0};

int main(){
	cin>>n>>k;
	searchprime();
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++) fsum(i,k,0); //��������,debug�˺ܾã�
	cout<<tot;
}

void searchprime(){
	memset(isprime,1,sizeof(isprime)); //��ʼȫ������������
    isprime[1]=0;
    for (int i=2;i<=M;i++){
        if (isprime[i]) prime[++num]=i;
        for (int j=1;j<=num&&i*prime[j]<=M;j++){
            isprime[i*prime[j]]=0;
            if(i % prime[j] == 0)//i��Ҳ����Prime[j]�������
			break;
        }
    }
}

void fsum(int index,int k,int sum){
	// cout<<" "<<index<<" "<<k<<" "<<sum<<endl;
	if (index>n) return;
	if (k==1){
	if (isprime[sum+a[index]]) {
		tot++;
		//cout<<"*"<<sum+a[index]<<endl;
	return;}
	}
	for (int i=index;i<=n;i++){
		fsum(i+1,k-1,sum+a[index]); //��+a[index]!!!!!!
	}
return;
}