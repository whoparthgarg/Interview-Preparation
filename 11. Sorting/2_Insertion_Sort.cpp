/*
-->Sort array in O(n*n) time complexity
-->See Pic.2_Insertion_Sort for reference
*/

#include<iostream>
#include<algorithm>
using namespace std;

void insertionSort(int a[],int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int e=a[i];//place the current element in right position in sorted path
        int j=i-1;
        while(j>=0 and a[j]>e)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=e;
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

    insertionSort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}