#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    struct linknode{
        int data;
        linknode *next;
    };
    linknode *head,*rear,*p,*q;
    cin>>n>>m;
    head=rear=new linknode;
    head->data=1;
    for (int i=2;i<=n;i++){
        p=new linknode;
        p->data=i;
        rear->next=p;
        rear=p;
    }
    rear->next=head;
    q=head;
    while (q->next!=q){
        for (int i=1;i<=m-2;i++) 
            q=q->next;
        p=q->next;
        q->next=p->next;
        cout<<p->data<<" ";
        delete p;
        q=q->next;
    }
    cout<<q->data;
    system("pause");
    return 0;
}
