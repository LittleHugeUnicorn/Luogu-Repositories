//1028,ตÝน้ 
#include<bits/stdc++.h>
using namespace std;
void js(int x);
int ans=0; 

int main(){
	int n;
	cin>>n;
	js(n);
	cout<<ans;
	return 0;
} 
void js(int x){ 
ans++;
	if (x==1) return;
	for (int i=1;i<=x/2;i++){
		js(i); 
	}
}

