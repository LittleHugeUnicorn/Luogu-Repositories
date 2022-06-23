#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int m;
	int a[2000001];
	cin>>m;
	for (int i=0;i<m;i++) cin>>a[i];
	sort(a,a+m);
	for (int i=0;i<m;i++) cout<<a[i]<<' ';
}
