/*
Concept :
A subsequence of an array is a set of numbers that aren’t necessarily adjacent in the array
but that are in the same order as they appear in the array. For instance, the numbers [1,3,4]
form a subsequence of the array [1,2,3,4], and so do the numbers [2,4]. Note that a single number
in an array and the array itself are both valid subsequences of the array.( [1],[2],[3],[4] and 
[1,2,3,4] are all valid subsequences of [1,2,3,4] )

Problem :
Input 2 arrays and validate if second is sub-sequence to 1st one;
*/
#include<iostream>
#include<algorithm>
using namespace std;

bool validateSubsequence(int a[],int b[],int n,int m)
{
    int i=0;
    int j=0;

    while(i<n and j<m)
    {
        if(a[i]==b[j])
        {
            j++;
        }
        i++;
    }

    return j==m;
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

    int m;
    cin>>m;

    int b[1000];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    cout<<validateSubsequence(a,b,n,m)<<endl;

    return 0;
}
