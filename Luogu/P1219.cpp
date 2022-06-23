//1219
#include<iostream>
using namespace std;
bool x[14]={false};//行
bool z1[26]={false};//左高对角线
bool z2[26]={false};//右高对角线
int col[14]={0};//记录位置 
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
		//k列i行
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
			x[i]=z1[n+k-i]=z2[2*n+1-k-i]=false; //回溯，为寻找下一个可行方案准备 
			}
		} 
}

