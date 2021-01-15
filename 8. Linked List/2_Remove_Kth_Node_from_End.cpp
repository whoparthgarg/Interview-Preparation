#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    //constructor
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
void insertAtHead(node* &head,int d)
{
    if(head==NULL)
    {
        head=new node(d);
        return ;
    }

    node* n=new node(d);
    n->next=head;
    head=n;

    return ;
}
int length(node* head)
{
    int cnt=0;
    while(head!=NULL)
    {
        cnt++;
        head=head->next;
    }

    return cnt;
}
void deleteAtHead(node* &head)
{
    node* temp=head;
    head=head->next;
    delete temp;
    return ;
}
void removeKthNode(node* &head,int len,int k)
{
    if(k==len)
    {
        deleteAtHead(head);
        return ;
    }
    node* temp=head;
    for(int i=1;i<(len-k);i++)
    {
        temp=temp->next;
    }
    node* prev=temp;
    temp=temp->next;
    node* n=temp->next;
    delete temp;
    prev->next=n;
    return ;
}
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;

    return ;
}
int main()
{
    node* head=NULL;

    insertAtHead(head,50);
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);

    print(head);

    //get length of linked list here len=5
    int len=length(head);

    //kth node from end
    int k;
    cin>>k;

    //corner case
    if(k>0 and k<=len)
    {
        removeKthNode(head,len,k); //time complexity O(n) : had to traverse linked list
    }

    print(head);

    return 0;
}