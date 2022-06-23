//1464 带有记忆化搜索的递归 
#include<bits/stdc++.h>
using namespace std;
long long w(long long a,long long b,long long c);
long long indata[101][3]; int n=0;
long long memdata[21][21][21];
int main(){
	for (int l=0;l<=20;l++)
		for (int m=0;m<=20;m++)
			for (int n=0;n<=20;n++)
			memdata[l][m][n]=-2; //初始化 
	do{
		cin>>indata[n][0]>>indata[n][1]>>indata[n][2];
		n++;	
	}while ((indata[n-1][0]!=-1)||(indata[n-1][1]!=-1)||(indata[n-1][2]!=-1));
	n-=2;
	
	for (int i=0;i<=n;i++) 
		cout<<"w("<<indata[i][0]
		<<", "<<indata[i][1]<<", "<<indata[i][2]<<") = "<<w(indata[i][0],indata[i][1],indata[i][2])<<endl;
	return 0;
}

long long w(long long a,long long b,long long c){
	if (a<=0||b<=0||c<=0) return 1;
	if (a>20||b>20||c>20) return w(20,20,20);
	if (memdata[a][b][c]!=-2) return memdata[a][b][c]; //记忆化搜索，如果已经算过就不再递归 
	if (a<b&&b<c) {
		memdata[a][b][c]=w(a,b,c-1)+w(a,b-1,c-1)-w(a,b-1,c);
		return memdata[a][b][c];
	}
	else{
		memdata[a][b][c]=w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
		return memdata[a][b][c];
	}
}
