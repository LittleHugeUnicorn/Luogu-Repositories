//1012
//string’Êœ„ 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	string a[20]; string num;
	string max;
	int index[20]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	cin>>n;
	for (int i=0;i<n;i++){
	cin>>a[i];	
	}
	max="0";
	do{
		num="";
		for (int j=0;j<n;j++){
			num+=a[index[j]];
		}
		if (num>max) max=num;
	}while (next_permutation(index,index+n));
	cout<<max;
	return 0;
}
