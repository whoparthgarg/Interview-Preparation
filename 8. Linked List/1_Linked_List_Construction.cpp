/*
Code describes how to construct a doubly linked list
and perform basic operations like : insertion , deletion
searching
*/
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* prev;
    node* next;

    //constructor
    node(int d)
    {
        data=d;
        prev=NULL;
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
    head->prev=n;
    head=n;

    return ;
}

void insertAtTail(node* &head,int d)
{
    if(head==NULL)
    {
        head=new node(d);
        return ;
    }

    node* tail=head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }

    //make a new node
    node* n=new node(d);
    tail->next=n;
    n->prev=tail;

    return ;
}

void insertAtMiddle(node* &head,int x,int d)
{
    if(head==NULL)
    {
        head=new node(d);
        return ;
    }

    node* temp=head;
    while(temp->next!=NULL)
    {
        if(temp->data==x)
        {
            break;
        }
        temp=temp->next;
    }

    node* n=new node(d);
    n->prev=temp;
    n->next=temp->next;
    temp->next=n;

    return ;
}

void deleteAtHead(node* &head)
{
    if(head==NULL)
    {
        return ;
    }

    node* temp=head;
    head=head->next;
    delete temp;

    return ;
}

void deleteAtTail(node* &head)
{
    node* tail=head;
    while(tail->next->next!=NULL)
    {
        tail=tail->next;
    }
    
    delete tail->next;
    tail->next=NULL;

    return ;
}

int search(node* head,int x)
{
    int cnt=0;
    while(head!=NULL)
    {
        cnt++;
        if(head->data==x)
        {
            return cnt;
        }
        head=head->next;
    }
    return -1;
}

void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }

    return ;
}

int main()
{
    //allocation
    node* head=new node(10);
    node* second=new node(20);
    node* third=new node(30);

    //forward allocation
    head->next=second;
    second->next=third;

    //backward allocation
    second->prev=head;
    third->prev=second;

    print(head);
    cout<<endl;

    //get tail
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    node* tail=temp;
    cout<<tail->data<<endl;

    //insert at head
    insertAtHead(head,40);

    print(head);
    cout<<endl;

    //insert at tail
    insertAtTail(head,50);

    print(head);
    cout<<endl;

    //insert at Middle(head,prev_node,new_node)
    insertAtMiddle(head,20,70);

    print(head);
    cout<<endl;

    //delete at Head
    deleteAtHead(head);

    print(head);
    cout<<endl;

    //delete at Tail
    deleteAtTail(head);

    print(head);
    cout<<endl;

    //searching
    int ans=search(head,70);
    if(ans!=-1)
    {
        cout<<"Present at node:"<<ans<<endl;
    }
    else
    {
        cout<<"Absent"<<endl;
    }

    print(head);
    return 0;
}
