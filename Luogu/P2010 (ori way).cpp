//2010
#include<bits/stdc++.h>
using namespace std;
int main(){
	int date[2]; int run;//闰年
	int x,mbegin,mend,dbegin,dend;
	int ans=0;
	int sh[9]; //储存日期每位 
	int y[2]; int m[2]; int d[2]; //储存开始和结束年月日 
	cin>>date[0]>>date[1];
	for (int i=0;i<=1;i++){
		d[i]=date[i]%100;
		date[i]/=100;
		m[i]=date[i]%100;
		date[i]/=100;
		y[i]=date[i];
	}
	for (int i=y[0];i<=y[1];i++){
		if (((i%4==0)&&(i%100!=0))||(i%400==0)) run=29;
		else run=28;
		if (i==y[0]) mbegin=m[0];
		else mbegin=1;
		if (i==y[1]) mend=m[1];
		else mend=12; //判断循环首尾月
			for (int j=mbegin;j<=mend;j++){
				if ((j==1)||(j==3)||(j==5)||(j==7)||(j==8)||(j==10)||(j==12)) dend=31;
				if ((j==4)||(j==6)||(j==9)||(j==11)) dend=30;
				if (j==2) dend=run;
				if ((i==y[0])&&(j==m[0])) dbegin=d[0];
				else dbegin=1;
				if ((i==y[1])&&(j==m[1])) dend=d[1]; //判断循环首尾天 
					for (int k=dbegin;k<=dend;k++){
						sh[4]=i%10;
						sh[3]=(i/10)%10;
						sh[2]=(i/100)%10;
						sh[1]=i/1000;
						sh[6]=j%10;
						sh[5]=j/10;
						sh[8]=k%10;
						sh[7]=k/10;
						if ((sh[1]==sh[8])&&(sh[2]==sh[7])&&(sh[3]==sh[6])&&(sh[4]==sh[5]))	ans++;
					//cout<<i*10000+j*100+k<<endl; 
					}
			}
	}
	cout<<ans;	
	return 0;
} 
