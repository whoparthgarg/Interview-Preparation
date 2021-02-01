#include<bits/stdc++.h>
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

void removeDuplicates(node* &head) // O(n*n)
{
    node* p1=NULL;
    node* p2=NULL;
    node* temp=NULL;
    p1=head;

    while(p1!=NULL and p1->next!=NULL)
    {
        p2=p1;
        while(p2->next!=NULL)
        {
            if(p1->data==p2->next->data)
            {
                temp=p2->next;
                p2->next=p2->next->next;
                delete(temp);
            }
            else
            {
                p2=p2->next;
            }
        }
        p1=p1->next;
    }

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

    insertAtHead(head,10);
    insertAtHead(head,11);
    insertAtHead(head,12);
    insertAtHead(head,11);
    insertAtHead(head,11);
    insertAtHead(head,12);
    insertAtHead(head,10);

    print(head);

    removeDuplicates(head);

    print(head);

    return 0;
}