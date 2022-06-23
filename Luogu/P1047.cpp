//1047
#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,m,num=0;
	int u,v,j,k;
	int t[10001];
	for (int i=0;i<=10000;i++){t[i]=1;
	}
	cin>>l>>m;
	for (int i=1;i<=m;i++){
		cin>>u>>v;
		for (j=u;j<=v;j++){
			if (t[j]==1) t[j]=0;
		}
	}
	for (k=0;k<=l;k++) {
	if (t[k]==1) num++;
	}
	cout<<num;
	return 0;
}
