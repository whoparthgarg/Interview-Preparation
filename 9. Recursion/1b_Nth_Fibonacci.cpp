#include<iostream>
using namespace std;

int fibonacci(int n)
{
    int a=1;
    int b=1;
    if(n==1)
    {
        return 0;
    }
    if(n==2 or n==3)
    {
        return 1;
    }
    else
    {
        int next,i=2;
        while(i<n)
        {
            next=a+b;
            a=b;
            b=next;
            i++;
        }
        return next;
    }
}

int main()
{
    int n;
    cin>>n;

    cout<<fibonacci(n)<<endl;
    return 0;
}