#include<iostream>
#include<vector>
using namespace std;
class MinMaxStack
{
    vector<int> stack;
    vector<int> min_stack;
    vector<int> max_stack;

    public:

    void push(int data)
    {
        int current_min=data;
        int current_max=data;

        if(min_stack.size())
        {
            current_min=min(min_stack[min_stack.size()-1],data);
            current_max=max(max_stack[max_stack.size()-1],data);
        }

        min_stack.push_back(current_min);
        max_stack.push_back(current_max);
        stack.push_back(data);
    }

    int getMin()
    {
        return min_stack[min_stack.size()-1];
    }

    int getMax()
    {
        return max_stack[max_stack.size()-1];
    }

    int top()
    {
        return stack[stack.size()-1];
    }

    bool isEmpty()
    {
        return stack.size()==0;
    }

    void pop()
    {
        min_stack.pop_back();
        max_stack.pop_back();
        stack.pop_back();
    }

    void print()
    {
        for(int x:stack)
        {
            cout<<x<<" ";
        }
        cout<<endl;

        for(int x:min_stack)
        {
            cout<<x<<" ";
        }
        cout<<endl;

        for(int x:max_stack)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    /*
    Time Complexity : O(1)
    Space Complexity : O(n)
    */
    MinMaxStack s;

    s.push(1);
    s.push(5);
    s.push(3);
    s.push(8);

    s.print();

    cout<<s.getMax()<<endl;
    s.pop();
    cout<<s.getMin()<<endl;
    cout<<s.getMax()<<endl;

    s.pop();
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.getMax()<<endl;

    return 0;
}