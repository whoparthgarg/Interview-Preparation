#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool matching(char a,char b)
{
    return ((a=='(' and b==')') or (a=='{' and b=='}') or (a=='[' and b==']'));
}

bool isBalanced(string str)
{
    stack<char> s;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='(' or str[i]=='{' or str[i]=='[')
        {
            s.push(str[i]);
        }
        else
        {
            if(s.empty()==true)
            {
                return false;
            }
            else if(matching(s.top(),str[i])==false)
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }

    return (s.empty()==true); //to handle extra opening brackets
}

int main()
{
    /*
    Time Complexity : O(n) 
    Space Complexity : O(1)
    */
    string str;
    cin>>str;

    cout<<isBalanced(str);

    return 0;
}