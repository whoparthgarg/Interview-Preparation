#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int d)
    {
        data=d;
        next=NULL;
    }
};
node* merge(node* head1,node* head2)
{
    //base case
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }

    //take a head pointer for merged linked list
    node* head3=NULL;

    if(head1->data < head2->data)
    {
        head3=head1;
        head3->next=merge(head1->next,head2);
    }
    else
    {
        head3=head2;
        head3->next=merge(head1,head2->next);
    }

    return head3;
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
    //linked list 1
    node* head1=new node(1);
    node* n3=new node(3);
    node* n5=new node(5);
    node* n7=new node(7);

    head1->next=n3;
    n3->next=n5;
    n5->next=n7;
    n7->next=NULL;

    print(head1);

    //linked list 2
    node* head2=new node(0);
    node* n2=new node(2);
    node* n4=new node(4);
    node* n6=new node(6);

    head2->next=n2;
    n2->next=n4;
    n4->next=n6;
    n6->next=NULL;

    print(head2);

    //merge linked list
    node* head3=merge(head1,head2);

    print(head3);

    return 0;
}