#include <bits/stdc++.h>
using namespace std;
string a[10001],b[10001];
int main()
{
	string input;
	int numline=0,numcorrect=0,time,ia,ib,j;
	do{
		getline(cin,input);
		if (input!="EOF") a[++numline]=input;
	}while(input!="EOF");
	numline=0;
	do{
		getline(cin,input);
		if (input!="EOF") b[++numline]=input;
	}while(input!="EOF");
	cin>>time;

	for (int i=1;i<=numline;i++){
		for (int k=0;k<a[i].length();k++){
				if (a[i][k]!='<') break;
				if (a[i][k]=='<') {a[i]=a[i].erase(0,1); k--;}
			}
			for (int k=0;k<a[i].length();k++){
				if (a[i][k]=='<'){
					a[i]=a[i].erase(k-1,2);
					k-=2;
				}
			}
		for (int k=0;k<b[i].length();k++){
				if (b[i][k]!='<') break;
				if (b[i][k]=='<') {b[i]=b[i].erase(0,1); k--;}
			}
			for (int k=0;k<b[i].length();k++){
				if (b[i][k]=='<'){
					b[i]=b[i].erase(k-1,2);
					k-=2;
				}
			}
			//cout<<a[i]<<"      "<<b[i]<<endl;
	}

	for (int i=1;i<=numline;i++){
		ia=0;ib=0;
		while(ia<a[i].length()&& ib<b[i].length()){
		if (a[i][ia]==b[i][ib]) numcorrect++;
        ia++;ib++;
		}
        //cout<<"   "<<i<<"  "<<numcorrect<<endl;
	}
	cout<<(int)(numcorrect+0.5/(time/60.));
	return 0;
}