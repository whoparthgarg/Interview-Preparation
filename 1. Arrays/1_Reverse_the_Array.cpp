#include<bits/stdc++.h>
using namespace std;

void reverse(int a[],int n)//time complexity O(n)
{
    int start=0;
    int end=n-1;

    while(start<end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }

    return ;
}

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    return ;
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

    print(arr,n);
    reverse(arr,n);
    print(arr,n);

    return 0;
}