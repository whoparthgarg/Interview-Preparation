#include<bits/stdc++.h>
using namespace std;

int kthMinMax(int a[],int n,int k)//time complexity O(n)
{
    return a[k-1];
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
    sort(arr,arr+n);
    
    int k;
    cin>>k;

    cout<<kthMinMax(arr,n,k);

    return 0;
}