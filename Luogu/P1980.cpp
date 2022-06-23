//1980
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,num,a; long tot=0;
	cin>>n>>x;
	for (int i=1;i<=n;i++){
		num=i;
		while (num>9){
			a=num%10;
			if (a==x) tot++;
			num/=10;
		}
		if (num==x) tot++;
		//cout<<i<<' '<<num<<' '<<tot<<endl;
	}
	cout<<tot;
	return 0;
}
