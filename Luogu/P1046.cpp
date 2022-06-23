#include<bits/stdc++.h> //P1046
using namespace std;
int main(){
	int a[10]={0};	int num=0,h;
	for (int i=0;i<=9;i++){
		cin>>a[i];
	}
	cin>>h;
	for (int i=0;i<=9;i++){
		if (a[i]<=h+30) num++; //30CM°åµÊ£¬äÆ£¡ 
	}
	cout<<num;
	return 0;
}
