#include<bits/stdc++.h>
using namespace std;

void sortNegative(int *a,int n)
{
    int key,j;

    for(int i=1;i<n;i++)
    {
        key=a[i];

        if(key>0)
        {
            continue;
        }

        j=i-1;

        while(j>=0 and a[j]>0)
        {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=key;
    }

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

    sortNegative(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}