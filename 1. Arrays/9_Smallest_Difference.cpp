#include<bits/stdc++.h>
using namespace std;

/*
Method 1 : Brute force with 2 loops O(n*n)
Method 2 : Using one while loop and 2 pointers O(n)
*/

void smallestDifference(int n1,int n2,int a[],int b[])
{
    sort(a,a+n1);
    sort(b,b+n2);

    int p1=0;
    int p2=0;

    int diff=INT_MAX;

    while(p1<n1 and p2<n2)
    {
        int temp=abs(a[p1]-b[p2]);

        if(temp<diff)
        {
            diff=temp;
        }

        if(a[p1]<b[p2])
        {
            p1++;
        }
        else
        {
            p2++;
        }
    }

    cout<<a[p1-1]<<" "<<b[p2-1]<<endl;
    cout<<diff;

    return ;
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;

    int arr1[1000]{0};
    int arr2[1000]{0};

    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }

    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }

    smallestDifference(n1,n2,arr1,arr2);
    
    /*
    Sample Input :
    6 5
    -1 3 5 10 20 28
    15 17 26 134 135
    
    Output :
    28 26 
    2
    */
    
    return 0;
}
