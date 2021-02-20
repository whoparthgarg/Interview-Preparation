/*
1st method : use three loops and get the sum (n^3)
2nd method : use two for loop and binary search (n^2*logn)
3rd method : use one for loop and two pointer approach (n^2)
*/

#include<bits/stdc++.h>
using namespace std;

void threeNumberSum(int a[],int n,int sum)
{
    for(int k=0;k<n;k++)
    {
        int reqSum=sum-a[k];
        int i=k+1;
        int j=n-1;
        while(i<j)
        {
            if(reqSum==(a[i]+a[j]))
            {
                cout<<a[k]<<" "<<a[i]<<" "<<a[j]<<endl;
                i++;
                j--;
            }
            else if(reqSum>(a[i]+a[j]))
            {
                i++;
            }
            else if(reqSum<(a[i]+a[j]))
            {
                j--;
            }
        }
    }
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

    int sum;
    cin>>sum;

    threeNumberSum(arr,n,sum);
    return 0;
}