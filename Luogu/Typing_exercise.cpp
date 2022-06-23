#include<bits/stdc++.h>
using namespace std;

int ori_hangnum[20100],now_hangnum[20100],cnto,cntn;
char ori[100050],now[100050],ch;
double KPM,T,tot=0;

inline int findq(int end,int start){
    for(int i=end;i>=start;i--) {if(now[i]!='\0') return i;}
    return 0;
}

inline int findp(int end,int start){
    for(int i=end;i>=start;i--) {if(ori[i]!='\0') return i;}
    return 0;
}

inline void proc() //处理'<'
{
    for(int i=1;i<=cntn;i++){
        int st=now_hangnum[i-1]+1,ed=now_hangnum[i];
        bool is_qian=true;
        for(int j=st;j<=ed;j++){
            if(now[j]!='<') is_qian=false;
            else{
                now[j]='\0';
                if(!is_qian) now[findq(j-1,st)]='\0';
            }
        }
    }
    for(int i=1;i<=cnto;i++){
        int st=ori_hangnum[i-1]+1,ed=ori_hangnum[i];
        bool is_qian=true;
        for(int j=st;j<=ed;j++){
            if(ori[j]!='<') is_qian=false;
            else{
                ori[j]='\0';
                if(!is_qian) ori[findp(j-1,st)]='\0';
            }
        }
    }
}

inline void gettot(){
    for(int i=1;i<=cnto;){
        int ho,hp;
        ho=ori_hangnum[i-1]+1;
        hp=now_hangnum[i-1]+1;
        while(ho<=ori_hangnum[i] && hp<=now_hangnum[i]){
            if(ori[ho]==now[hp]) {tot++;ho++;hp++;}
            else{
                if(now[hp]=='\0') hp++;
                else {hp++;ho++;}
            }
        }
        i++;
    }
}

int main()
{
// SEC1:读取范文 
    int co=0,cn=0;
    while(scanf("%c",&ch)!=EOF){
        if(ch=='\n') ori_hangnum[++cnto]=co;
        else ori[++co]=ch;
    }
    
//SEC2:读取R君写的东西
    while(scanf("%c",&ch)!=EOF){
        if(ch=='\n') now_hangnum[++cntn]=cn;
        else now[++cn]=ch;
    }
    proc();
    gettot();
    scanf("%lf",&T);
    KPM=tot/T*60;
    cout<<fixed<<setprecision(0)<<KPM;
    return 0;
}