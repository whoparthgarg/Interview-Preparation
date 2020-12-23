/*
Concept :
Binary Search - Find element in a sorted array 
with time complexity of O(logn) 
--> Use two pointer low and high , find mid
and check if it matches the required element

Input :
Size , elements of array and key element tobe found

Output :
returns index of element in array , 
if not found returns -1
*/

#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int low=0;
    int high=n-1;
    int mid=0;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
    }

    return -1;
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

    int key;
    cin>>key;

    cout<<binarySearch(arr,n,key)<<endl;

    return 0;
}