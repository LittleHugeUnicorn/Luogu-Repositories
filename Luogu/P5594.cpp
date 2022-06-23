//5594
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,k,i,j;
	int a,ans;
	bool d[1001][1001]={0};//d[i][j] 第i天作为第j个空日 
	cin>>n>>m>>k;
	for (i=1;i<=n;i++){
		for (j=1;j<=m;j++){
		cin>>a;
		d[a][j]=1; 
		}
	}
	for (i=1;i<=k;i++){
		ans=0;
		for (j=1;j<=m;j++) if (d[i][j]==1) ans++;
		cout<<ans<<' ';
	}
} 
