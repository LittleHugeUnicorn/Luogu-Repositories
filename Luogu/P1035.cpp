//1035
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k; long i; double s;
	cin>>k;
	for (i=1;i<=1835421;i++){ //此处i上限经k=15计算得 
		s+=(1/(double)i); //注意此处类型要转换 
		if (s>k) break;
	} 
	cout<<i;
	return 0;
}
