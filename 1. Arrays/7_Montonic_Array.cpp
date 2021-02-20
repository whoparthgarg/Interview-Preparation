#include<bits/stdc++.h>
using namespace std;

bool inc(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int diff=a[i]-a[i+1];
        if(diff>0)
        {
            return false;
        }
    }

    return true;
}

bool dec(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int diff=a[i]-a[i+1];
        if(diff<0)
        {
            return false;
        }
    }

    return true;
}

bool montonic(int a[],int n)
{
    if(n<=2)
    {
        return true;
    }

    bool t1=inc(a,n);
    bool t2=dec(a,n);

    return (t1 or t2);
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<montonic(arr,n);
    return 0;
}