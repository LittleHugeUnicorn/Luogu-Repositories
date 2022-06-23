//1177
#include<bits/stdc++.h>
using namespace std;
int n,a[1000001];
void qsort(int a[],int l,int r);

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    qsort(a,1,n);
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
} 
void qsort(int a[],int l,int r)
{
	//cout<<l<<' '<<r<<"->";
    int mid=a[(l+r)/2];//中间数
    int i=l,j=r;
    do{
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<=j);
	//cout<<i<<' '<<j<<endl;
    if(l<j) qsort(a,l,j);
    if(i<r) qsort(a,i,r);
    //递归结束条件是指针到达或超出原数组上下标 
}
