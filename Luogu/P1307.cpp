//1307
#include<bits/stdc++.h>
using namespace std;
int main(){
	long n,ans=0; bool sign=false;
	int a[10]={0},w=0;
	cin>>n;
	if (n<0) {sign=true;n=-n;}
	while (n>9){
		a[w]=n%10;
		w++;
		n/=10;
	}
	a[w]=n%10; 
	for (int i=w;i>=0;i--){
		ans+=pow(10,w-i)*a[i];
	}
	if (sign) cout<<'-';
	cout<<ans;
	return 0;
}
