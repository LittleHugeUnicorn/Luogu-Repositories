#include<bits/stdc++.h>
using namespace std;
int main(){
	int need,k; long min=10000000;
	int num[3]={0},price[3]={0};
	cin>>need;
	for (int i=0;i<3;i++){
		cin>>num[i]>>price[i];
		k=need/num[i];
		if (k*num[i]<need) k++;
		min=((k*price[i]<min)?k*price[i]:min);
	}
	cout<<min;
	return 0;
}
