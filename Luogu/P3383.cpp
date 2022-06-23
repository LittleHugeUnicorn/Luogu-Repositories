//3383
//线性筛
#include<bits/stdc++.h>
using namespace std;
void listprime(int n);
bool isprime[100000010]; //1是素数
int prime[6000010]; //储存质数
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
    memset(isprime,1,sizeof(isprime)); //初始全部设成质数
    isprime[1]=0;
    for (int i=2;i<=n;i++){
        if (isprime[i]) prime[++num]=i;
        for (int j=1;j<=num&&i*prime[j]<=n;j++){
            isprime[i*prime[j]]=0;
            if(i % prime[j] == 0)//i中也含有Prime[j]这个因子
			break;
        }
    }
    //for (int i=1;i<=q;i++) cout<<prime[quest[i]]<<endl;
}