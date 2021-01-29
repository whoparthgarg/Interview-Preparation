#include<iostream>
using namespace std;
int sunsetViews(int a[],int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
            {
                count++;
            }
        }

        return count;
    }
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

    cout<<sunsetViews(arr,n);
    return 0;
}