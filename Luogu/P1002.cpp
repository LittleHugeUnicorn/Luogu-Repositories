//P1002
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long path[23][23]={0};
    int ncb,mcb,nhr,mhr; //n行数 m列数 cb棋盘 hr马
    int i,j;
    cin>>ncb>>mcb>>nhr>>mhr;
    path[nhr][mhr]=-1;
    if (nhr>=2&&mhr>=1) path[nhr-2][mhr-1]=-1;
    if (nhr>=2)         path[nhr-2][mhr+1]=-1;
    if (nhr>=1&&mhr>=2) path[nhr-1][mhr-2]=-1;
    if (nhr>=1)         path[nhr-1][mhr+2]=-1;
    if (mhr>=1)         path[nhr+2][mhr-1]=-1;
    if (mhr>=2)         path[nhr+1][mhr-2]=-1;
                        path[nhr+1][mhr+2]=-1;
                        path[nhr+2][mhr+1]=-1;
    for (i=0;i<=ncb;i++) {
        if (path[i][0]==-1) break;
        path[i][0]=1;
    }
    for (i=0;i<=mcb;i++) {
        if (path[0][i]==-1) break;
        path[0][i]=1;
    }
    for (i=1;i<=ncb;i++)
        for (j=1;j<=mcb;j++){
            if (path[i][j]==-1) continue;
            if (path[i-1][j]!=-1) path[i][j]+=path[i-1][j];
            if (path[i][j-1]!=-1) path[i][j]+=path[i][j-1];
        }
    if (path[ncb][mcb]==-1) cout<<'0';
    else cout<<path[ncb][mcb]<<endl;
/* Debug
    for (i=0;i<=ncb;i++){
    for (j=0;j<=mcb;j++) cout<<path[i][j]<<"\t";cout<<endl;}
*/
    system("pause");
    return 0;
}