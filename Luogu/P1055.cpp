//1055
#include<bits/stdc++.h>
using namespace std;
char isbn[14];
int k[11];
long sum=0;
int main(){
	int i=0,digit=1;
	cin.getline(isbn,14);
	do{
	if (isbn[i]>='0'&&isbn[i]<='9'){
		k[digit++]=isbn[i]-'0';
	}
	if (isbn[i]=='X'){
		k[digit++]=10;
	}
	i++;	
	}while(isbn[i]!='\0');
	for (int j=1;j<=9;j++){
		sum+=j*k[j];
	}
	if ((sum%11)==k[10]) cout<<"Right";
	else{
		cout<<k[1]<<'-';
		for (int j=2;j<=4;j++) cout<<k[j];
		cout<<'-';
		for (int j=5;j<=9;j++) cout<<k[j];
		cout<<'-';
		if (sum%11==10) cout<<'X'<<endl;
		else cout<<(sum%11)<<endl;
	}
	//for (int z=0;z<=10;z++)cout<<k[z]<<endl;
	return 0;
} 
