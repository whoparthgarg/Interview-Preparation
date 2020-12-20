/*
Problem :
Input size of array and array elements.
Of all the sub-arrays possible , find the maximum
sum of sub-array possible.

Solution :
Kadane's Algo only uses O(n)
*/

#include<iostream>
using namespace std;
int main()
{
    //sub-array : continous part of array
    int n;
    cin>>n;

    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //Get max sum
    int currentSum=0;
    int maxSum=0;

    //Generating Maximum Sub-Array Sum (n) ---> Kadane Algo
    for(int i=0;i<n;i++)
    {
        currentSum=currentSum+a[i];
        if(currentSum<0)
        {
            currentSum=0;
        }
        maxSum=max(maxSum,currentSum);
    }

    cout<<"Max Sum : "<<maxSum<<endl;

    return 0;
}