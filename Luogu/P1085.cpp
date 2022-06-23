//1085
#include<bits/stdc++.h>
using namespace std;
int main(){
	bool happy=true;
	int max=0,d=0,a,b;
	for (int i=1;i<8;i++){
		cin>>a>>b;
		if ((a+b)>8){
			happy=false;
			if ((a+b)>max) {
				max=a+b;
				d=i;
			}		
		}
	}	
		if (!happy) cout<<d;
		else cout<<0;
	return 0;
}
