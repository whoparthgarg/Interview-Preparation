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
/*
Iterative method to reverse a linked list
Time Complexity : O(n)
Space Complexity : O(1)
*/
void reverse(node* &head)
{
    node* curr=head;
    node* prev=NULL;
    node* n;

    while(curr!=NULL)
    {
        //save the next node
        n=curr->next;

        //make current node point to previous
        curr->next=prev;

        //update previous and current node
        prev=curr;
        curr=n;
    }
    //make last node(prev node) as head
    head=prev;

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
    //constructing linked list
    node* head=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    //linked list :  10->20->30->40->
    print(head);
    
    reverse(head);

    print(head);

    return 0;

}