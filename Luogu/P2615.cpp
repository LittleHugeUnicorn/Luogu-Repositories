//P2615
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[40][40]={0};
	int scale,row,col,nrow,ncol;
	cin>>scale;
	col=(scale-1)/2; row=0;
	a[row][col]=1;
	for (int k=2;k<=scale*scale;k++){
		if (a[(row+scale-1)%scale][(col+1)%scale]==0) 
		{ 
			row=(row+scale-1)%scale;
			col=(col+1)%scale;
		}
		else row=(row+1)%scale;
		a[row][col]=k;
	}
	
	for (int i=0;i<=scale-1;i++){
		for (int j=0;j<=scale-1;j++) cout<<a[i][j]<<' ';
		cout<<endl;
	}	
	return 0;
}

