#include<iostream>
#include<algorithm>
using namespace std;

void moveElementToEnd(int a[],int n,int element)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(a[i]==element and a[j]!=element)
        {
            swap(a[i],a[j]);
        }
        else if(a[j]==element)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int n;
    cin>>n;

    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int element;
    cin>>element;

    moveElementToEnd(a,n,element);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}