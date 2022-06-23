//1089
#include<bits/stdc++.h>
using namespace std;
int main(){
	int i=0;
	int cur=0;int mom=0;int a[12]={0},k;
	for (int j=0;j<=11;j++) cin>>a[j];
	for (i=0;i<=11;i++){
		cur+=300;
		cur-=a[i];
		if (cur<0) break;
		if (cur>=100){
			k=cur%100;
			mom+=(cur-k);
			cur=k;
		if (cur<0) break;
		}
	}
	if (cur<0) cout<<'-'<<i+1;
	else cout<<cur+mom*1.2;
	return 0;
}
