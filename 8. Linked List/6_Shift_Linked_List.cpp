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
void shift(node* &head,int k)
{
    if(head==NULL)
    {
        return ;
    }
    
    while(k--)
    {
        node* temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        node* tail=temp->next;
        tail->next=head;
        head=tail;
        temp->next=NULL;
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
    node* head=new node(1);
    node* second=new node(2);
    node* third=new node(3);
    node* forth=new node(4);
    node* fifth=new node(5);

    head->next=second;
    second->next=third;
    third->next=forth;
    forth->next=fifth;
    fifth->next=NULL;

    print(head);

    //number of shifting
    int k;
    cin>>k;

    shift(head,k);

    print(head);
    return 0;
}