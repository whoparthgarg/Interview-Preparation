/*
Concept :
A sub-array is the continous part of array
Eg : a={-3,-2,3,4,-2,4,-5,-6} 
So sub array with maximum sum is given by -
sub array is {3,4,-2,4}

Problem :
Input size , elements of array 
Find maximum sum of a sub-array

Solution :
Kadane's Algorithm : find current sum , if current sum 
becomes less than zero , make it zero , and side by side
compare current sum with max sum .
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //Kadane's Algorithm
    int currentSum=0;
    int maxSum=0;

    for(int i=0;i<n;i++)
    {
        currentSum=currentSum+a[i];
        if(currentSum<0)
        {
            currentSum=0;
        }
        if(currentSum>maxSum)
        {
            maxSum=currentSum;
        }
    }

    cout<<maxSum<<endl;

    return 0;
}