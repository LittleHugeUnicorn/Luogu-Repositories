//3383
//����ɸ
#include<bits/stdc++.h>
using namespace std;
void listprime(int n);
bool isprime[100000010]; //1������
int prime[6000010]; //��������
int num=0;

int main(){
	int n, q;
	scanf("%d %d", &n, &q);
	listprime(n);
	while (q--)
	{
		int k;
		scanf("%d", &k);
		printf("%d\n", prime[k]);
	}
	return 0;
}
void listprime(int n){
    memset(isprime,1,sizeof(isprime)); //��ʼȫ���������
    isprime[1]=0;
    for (int i=2;i<=n;i++){
        if (isprime[i]) prime[++num]=i;
        for (int j=1;j<=num&&i*prime[j]<=n;j++){
            isprime[i*prime[j]]=0;
            if(i % prime[j] == 0)//i��Ҳ����Prime[j]�������
			break;
        }
    }
    //for (int i=1;i<=q;i++) cout<<prime[quest[i]]<<endl;
}