#include<bits/stdc++.h>
using namespace std;

void minmax(int a[],int n)//time complexity O(n)
{
    int min_no=INT_MAX;
    int max_no=INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(a[i]>max_no)
        {
            max_no=a[i];
        }
        if(a[i]<min_no)
        {
            min_no=a[i];
        }
    }

    cout<<max_no<<" "<<min_no<<endl;
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

    minmax(arr,n);

    return 0;
}