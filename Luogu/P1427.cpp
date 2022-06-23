//1427
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[101]={0};
	int n=0,in;
	do{
		cin>>in;
		if (in!=0) a[n++]=in;	
	}while (in!=0);
	for (int i=n-1;i>=0;i--) cout<<a[i]<<' ';
	return 0;
} 
