//2010
//简化方法，枚举后四位，先算回文数，再判断是否在范围内，这样不用管闰月和循环在起终月份特殊化！
//而且在日期区间大于1年时节省循环次数，节省时间 
#include<bits/stdc++.h>
using namespace std;
int main(){
	long date[2];
	long x;
	int ans=0;
	int kk[14]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int y[2]; int m[2]; int d[2]; //储存开始和结束年月日 
	cin>>date[0]>>date[1];
		for (int j=1;j<=12;j++){
				for (int k=1;k<=kk[j];k++){
					x=(k%10)*10000000+
					(k/10)*1000000+
					(j%10)*100000+(j/10)*10000+
					(j/10)*1000+(j%10)*100+(k/10)*10+k%10;
					
					 if ((x>=date[0])&&(x<=date[1])) ans++;
				}
			}
	cout<<ans;	
	return 0;
} 
