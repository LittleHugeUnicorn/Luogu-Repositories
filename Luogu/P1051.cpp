//1051
#include <bits/stdc++.h>
using namespace std;
struct student{
    string name;
    int avgscore;
    int pyscore;
    bool cadre;
    bool west;
    int paper;
    int scholarship;
    int index; //输入顺序
};
student data[101];
//计算奖学金
int calc_ss(student p);
bool cmp(const student &a,const student &b){
    if (a.scholarship==b.scholarship) return (a.index<b.index);
    return (a.scholarship>b.scholarship);
}
int main()
{
    int n; char input; long long tot=0;
    cin>>n;
    for (int i=1;i<=n;i++){
        data[i].cadre=false; data[i].west=false;
        data[i].index=i;
        cin>>data[i].name>>data[i].avgscore>>data[i].pyscore;
        cin>>input; if (input=='Y') data[i].cadre=true;
        cin>>input; if (input=='Y') data[i].west=true;
        cin>>data[i].paper;
        data[i].scholarship=calc_ss(data[i]);
        tot+=data[i].scholarship;
    }
    sort(data+1,data+n+1,cmp);
    cout<<data[1].name<<endl;
    cout<<data[1].scholarship<<endl;
    cout<<tot<<endl;
    return 0;
}

int calc_ss(student p){
    int sch=0; 
    if (p.avgscore>80&&p.paper>=1) sch+=8000;
    if (p.avgscore>85&&p.pyscore>80) sch+=4000;
    if (p.avgscore>90) sch+=2000;
    if (p.avgscore>85&&p.west) sch+=1000;
    if (p.pyscore>80&&p.cadre) sch+=850;
    return sch;
}