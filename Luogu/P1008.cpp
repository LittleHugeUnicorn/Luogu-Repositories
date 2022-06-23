//1008
#include<bits/stdc++.h>
using namespace std;
int a[9]={1,2,3,4,5,6,7,8,9};
int main()
{
	int x1,x2,x3;
	sort(a,a+9);
	do{
			x1=a[0]*100+a[1]*10+a[2];
			x2=a[3]*100+a[4]*10+a[5];
			x3=a[6]*100+a[7]*10+a[8];
			if ((x1*2==x2) and (x1*3==x3)){
			cout<<x1<<" "<<x2<<" "<<x3<<endl;
			}
	}while(next_permutation(a,a+9));
	return 0;
}
