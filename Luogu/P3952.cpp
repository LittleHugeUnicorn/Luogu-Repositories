//3952
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ans[11]; //第i个程序的输出结果
    bool var_usage[30]; //变量使用,0为未使用
    char var_shed[110];
    bool flag_shed[110];
    int o_shed[110]; //表示第f层栈阶数
    int t,L,f,o,num_x,num_y,omax; string in_o,ans_o; //f为循环嵌套次数,o为时间复杂度阶数
    string a,x,y; char i;//a为F/E,i为输入变量名,x/y为输入循环变量
    cin>>t;
    for (int m=1;m<=t;m++){
        // cout<<m<<endl;
        cin>>L>>in_o;
        f=0;o=0,omax=0; 
        memset(var_usage,0,sizeof(var_usage));
        memset(var_shed,0,sizeof(var_shed));
        memset(o_shed,0,sizeof(o_shed));
        memset(flag_shed,0,sizeof(flag_shed));
        flag_shed[0]=1;
        if (L%2) {ans[m]="ERR";}
        for (int n=1;n<=L;n++){
            cin>>a;
            if (a=="F") {
                f++;
                cin>>i>>x>>y;
                if (f<0) {ans[m]="ERR";continue;}
                if (var_usage[i-'a']) {ans[m]="ERR";continue;}
                else {var_usage[i-'a']=1; var_shed[f]=i;}
                if (x=="n") num_x=200; else num_x=atoi(x.c_str());
                if (y=="n") num_y=200; else num_y=atoi(y.c_str());
                if (num_x<=num_y) 
                {   
                    if (!flag_shed[f-1]) flag_shed[f]=0;
                    else flag_shed[f]=1; //表示第f层进行了循环
                    o_shed[f]=o_shed[f-1];
                    if (num_y-num_x>=100 && flag_shed[f-1]) o_shed[f]+=1; 
                    if (o_shed[f]>omax) omax=o_shed[f];
                    //cout<<omax<<endl;
                }
                else {flag_shed[f]=0;}
            }
            if (a=="E"){
                f--;
                if (f<0) {ans[m]="ERR";continue;}
                //if (o_shed[f+1]>omax) omax=o_shed[f+1];
                //cout<<f+1<<"   "<<o_shed[f+1]<<endl;
                o_shed[f+1]=0;
                flag_shed[f+1]=0;
                var_usage[var_shed[f+1]-'a']=0;
            }
        }
        //cout<<m<<endl;
        if (ans[m]=="ERR") continue;
        if (!omax) ans_o="O(1)";
            else ans_o="O(n^"+to_string(omax)+")";
        if (ans_o==in_o) ans[m]="Yes";
            else ans[m]="No";
        if (f) ans[m]="ERR";
    }
    for (int m=1;m<=t;m++){
        cout<<ans[m]<<endl;
    }
    return 0;
}
