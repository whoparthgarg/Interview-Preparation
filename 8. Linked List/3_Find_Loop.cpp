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
bool isLoop(node* head)
{
    node* temp=new node(-1);
    node* curr=head;
    while(curr!=NULL)
    {
        if(curr->next==NULL)
        {
            return false;
        }
        if(curr->next==temp)
        {
            return true;
        }

        node* curr_next=curr->next;
        curr->next=temp;
        curr=curr_next;
    }

    return false;
}
int main()
{
    //constructing linked list
    node* head=new node(10);
    node* second=new node(15);
    node* third=new node(12);
    node* fourth=new node(20);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=second;

    /*
    Linked list
    10->15->12->20
        ^        |
        |________|
    */

    cout<<isLoop(head);
    return 0;
}