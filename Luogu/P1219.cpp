//1219
#include<iostream>
using namespace std;
bool x[14]={false};//��
bool z1[26]={false};//��߶Խ���
bool z2[26]={false};//�Ҹ߶Խ���
int col[14]={0};//��¼λ�� 
int n,p=0;
void queen(int k);

int main(){
	cin>>n;
	queen(1);
	cout<<p;
	return 0;
} 

void queen(int k){
	for (int i=1;i<=n;i++){
		//k��i��
		if ((!x[i])&&(!z1[n+k-i])&&(!z2[2*n+1-k-i])){
			col[k]=i;
			x[i]=z1[n+k-i]=z2[2*n+1-k-i]=true;
			if (k==n){
				p++;
				if (p<=3) {
					for (int j=1;j<=n;j++){
						cout<<col[j]<<' ';
					}
					cout<<endl;
				}
			}
			else queen(k+1);
			x[i]=z1[n+k-i]=z2[2*n+1-k-i]=false; //���ݣ�ΪѰ����һ�����з���׼�� 
			}
		} 
}

