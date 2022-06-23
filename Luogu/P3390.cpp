//洛谷P3390 矩阵快速幂
#include <bits/stdc++.h>
using namespace std;
const long long Mod=1000000007;
int N;

class Matrix{
    friend ostream &operator<<(ostream &os,const Matrix &obj);
    private:
    long long a[101][101];

    public:
    void Initialize(){ //初始化为单位矩阵
        for(int i=1;i<=N;i++)
            a[i][i]=1;
    }
    void qmod(){
        for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
            a[i][j]=a[i][j]%Mod;
    }
    Matrix operator*(const Matrix &obj){
        Matrix tmp;
        cout<<&tmp<<'\n';
        for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++){
            tmp.a[i][j]=0;
            for(int k=1;k<=N;k++)
            tmp.a[i][j]=(tmp.a[i][j]+(a[i][k]*obj.a[k][j])%Mod)%Mod;
        }
        return tmp;
    }
    Matrix &operator=(const Matrix &put) 
    {
        if(this==&put) return *this;
        for(int i=1;i<=N;i++)
        for(int j=1;j<=N;j++)
        a[i][j]=put.a[i][j];
        return *this;
    }
    void read(){
    for(int i=1;i<=N;i++)
    for(int j=1;j<=N;j++)
        cin>>a[i][j];
    }
};
ostream &operator<<(ostream &os,const Matrix &obj)
{
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++) os<<obj.a[i][j]<<' ';
        cout<<'\n';
    }
    return os;
}
int main()
{
    //ios::sync_with_stdio(false);
    long long k;
    Matrix ans,x;
    cin>>N>>k;
    x.read();
    ans.Initialize();
    if (k==0) {cout<<ans; return 0;}
    while (k) {
        if (k % 2) {ans=ans*x;}//cout<<k<<'\n';}
        x=x*x;
        k /= 2;
    }
    ans.qmod();
    cout<<ans;
    system("pause");
    return 0;
}