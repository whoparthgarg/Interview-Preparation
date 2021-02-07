/*
Problem :
Given a sorted array find pairs which sum to element k

Solution :
1st method : use two loops and get the sum (n^2)
2nd method : use one for loop and binary search (nlogn)
3rd method : two pointer approach only for sorted arrays (n)
*/

#include<bits/stdc++.h>
using namespace std;

void twoNumberSum(int *a,int n,int k)
{
    int i=0;
    int j=n-1;

    while(i<j)
    {
        int sum=a[i]+a[j];
        if(sum==k)
        {
            cout<<a[i]<<" "<<a[j]<<endl;
            i++;
            j--;
        }
        else if(sum>k)
        {
            j--;
        }
        else if(sum<k)
        {
            i++;
        }
    }

    if(i==j)
    {
        cout<<"-1";
    }

    return ;
}

int main()
{
    int n;
    cin>>n;

    int arr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int k;
    cin>>k;

    twoNumberSum(arr,n,k);
    return 0;
}
