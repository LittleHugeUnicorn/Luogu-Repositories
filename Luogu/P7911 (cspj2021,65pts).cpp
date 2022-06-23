//P7911 CSP-J2021
#include <bits/stdc++.h>
using namespace std;
int client[1001][5];
int server[1001][6]; //server的第五字段存储该机编号
int indexsep[21]; //：.所在位置
bool cmpserver(int n){ //寻找n之前是否有相同地址,有重复return 1
    int flag;
    for(int i=1;i<=n-1;i++){
        flag=1;
        for(int j=0;j<=4;j++)
        if(server[n][j]!=server[i][j]) {flag=0;break;}
        if (flag) return 1;
    }
    return 0;
}
int linkclient(int n,int cindex){//寻找前n个服务器有无可连接,cindex为客户机地址
    int flag;
    for(int i=1;i<=n;i++){
        flag=1;
        for(int j=0;j<=4;j++)
        if(client[cindex][j]!=server[i][j]){flag=0;break;}
        if (flag) return server[i][5];
    }
    return 0;
}
int main()
{
    int n,numc=0,nums=0,k,nmh,ndh,intype,zinum,flag,tmp;//nmh冒号个数 ndh点号个数
    string input,op,ad,zistr;
    stringstream stream;
    indexsep[0]=-1;
    scanf("%d\n",&n);
    for (int i=1;i<=n;i++){
        getline(cin,input);
        op=input.substr(0,6);
        if (op=="Client") {numc++; intype=1;} 
        else if (op=="Server") {nums++; intype=0;server[nums][5]=i;}
        else {printf("ERR\n"); continue;}
        ad=input.substr(7,input.length()-6);
        k=1; nmh=0;ndh=0; 
        for(int j=0;j<ad.length();j++){
            if (ad[j]=='.')
            {indexsep[k++]=j; ndh++;}
            if (ad[j]==':')
            {indexsep[k++]=j; nmh++;}
        }
        if (nmh!=1||ndh!=3||k!=5){printf("ERR\n"); continue;}
        else{
            tmp=0;
            for(int j=0;j<=4;j++){
                indexsep[5]=ad.length();
                zistr=ad.substr(indexsep[j]+1,indexsep[j+1]-indexsep[j]-1);
                stream<<zistr;
                stream>>zinum;
                stream.clear();
                for(int m=0;m<zistr.length();m++)
                    if(zistr[m]<'0'||zistr[m]>'9'){ printf("ERR\n");tmp=1;} 
                if (zinum!=0&&zistr[0]=='0'){ printf("ERR\n");tmp=1;}
                if (zinum==0&&zistr.length()!=1){printf("ERR\n");tmp=1;}
            if (intype) client[numc][j]=zinum;
            else server[nums][j]=zinum;
            }
            if (tmp) continue;
        }
        flag=0;
        if (intype){ //客户端
            for(int j=0;j<=3;j++)
            if (client[numc][j]<0||client[numc][j]>255) {printf("ERR\n");flag=1;break;}
                if (flag) continue;
            if (client[numc][4]<0||client[numc][4]>65535) {printf("ERR\n");continue;}
            tmp=linkclient(nums,numc);
            if (tmp) printf("%d\n",tmp);
            else printf("FAIL\n");
        }
        else{ //服务器端
            for(int j=0;j<=3;j++)
            if (server[nums][j]<0||server[nums][j]>255) {printf("ERR\n");flag=1; break;}
                if (flag) continue;
            if (server[nums][4]<0||server[nums][4]>65535) {printf("ERR\n"); continue;}
            if (cmpserver(nums)) {printf("FAIL\n"); continue;}
            printf("OK\n");
        }

    }
    return 0;
}
