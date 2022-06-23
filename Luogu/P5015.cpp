//5015
#include<bits/stdc++.h>
using namespace std;
int main(){
	char ch[6]; int i=0; int ans=0;
	cin.getline(ch,6);
	do{
		if (ch[i]!=' ') {
			ans++;
		}
		i++;
	}while (ch[i]!='\0');
	cout<<ans;
	return 0;
}
