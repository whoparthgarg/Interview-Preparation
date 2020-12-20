/*
Problem :
Given a sorted array find pairs which sum to element k

Solution :
1st method : use two loops and get the sum (n^2)
2nd method : use one for loop and binary search (nlogn)
3rd method : two pointer approach only for sorted arrays (n)
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int k;
    cin>>k;

    int i=0;
    int j=n-1;

    while(i<j)
    {
        if((a[i]+a[j])==k)
        {
            cout<<a[i]<<" and "<<a[j]<<endl;
            i++;
            j--;
        }
        else if((a[i]+a[j])>k)
        {
            j--;
        }
        else if((a[i]+a[j])<k)
        {
            i++;
        }
    }

    return 0;
}