//1035
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k; long i; double s;
	cin>>k;
	for (i=1;i<=1835421;i++){ //�˴�i���޾�k=15����� 
		s+=(1/(double)i); //ע��˴�����Ҫת�� 
		if (s>k) break;
	} 
	cout<<i;
	return 0;
}
