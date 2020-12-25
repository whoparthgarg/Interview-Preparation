/*
-->Sort array in O(n*n) time complexity
-->See Pic.1_Bubble_Sort for reference
*/

#include<iostream>
#include<algorithm>
using namespace std;

void bubbleSort(int a[],int n)
{
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            if(a[j-1]>a[j])
            {
                swap(a[j-1],a[j]);
            }
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

    bubbleSort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}