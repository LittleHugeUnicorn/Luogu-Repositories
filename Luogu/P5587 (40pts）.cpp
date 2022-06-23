#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a[10001],b[10001],input;
	int numline=0,numcorrect=0,time,ia,ib;
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
		ia=0;ib=0;
		do{
			if (a[i][ia]==b[i][ia]) numcorrect++;
		} while(ia<a[i].length() && ib<b[i].length());
	}
	cout<<numcorrect;
	return 0;
}
