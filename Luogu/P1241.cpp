//1241
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x[20001]={0}; //存放某数是否能加出
	int n; int a[101];
	int i,j,tot=0;
	cin>>n;
	for (i=0;i<=n-1;i++) cin>>a[i];
	for (i=0;i<=n-2;i++){
		for (j=i+1;j<=n-1;j++)
		x[a[i]+a[j]]=1;
	}
	for (i=0;i<=n-1;i++) if (x[a[i]]==1) tot++;
	cout<<tot;
	return 0;
}
