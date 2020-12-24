/*
--> Array can be sorted or unsorted
--> no need to sort , O(n) solution 
*/

#include<iostream>
#include<climits>
using namespace std;

void threeLargest(int arr[],int n)
{
    int b[3]={INT_MIN};
    for(int i=0;i<n;i++)
    {
        if(arr[i]>b[2])
        {
            b[0]=b[1];
            b[1]=b[2];
            b[2]=arr[i];
        }
        else if(arr[i]>b[1])
        {
            b[0]=b[1];
            b[1]=arr[i];
        }
        else if(arr[i]>b[0])
        {
            b[0]=arr[i];
        }
    }

    for(int i=0;i<3;i++)
    {
        cout<<b[i]<<" ";
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

    threeLargest(arr,n);

    return 0;
}