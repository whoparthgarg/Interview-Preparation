#include<bits/stdc++.h>
using namespace std;

void smallestDifference(int a1[],int a2[],int n1,int n2)//Time Comp. O(mlogm + nlogn)
{
    int i=0;
    int j=0;
    int diff=INT_MAX;
    int left=-1;
    int right=-1;
    
    while(i<n1 and j<n2)
    {
        int curr_diff=abs(a1[i]-a2[j]);
        
        if(curr_diff<diff)
        {
            diff=curr_diff;
            left=i;
            right=j;
        }

        if(a1[i]<a2[j])
        {
            i++;
        }
        else if(a1[i]>a2[j])
        {
            j++;
        }
    }
    
    cout<<a1[left]<<" "<<a2[right];
    return ;
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;

    int a1[n1];
    int a2[n2];

    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>a2[i];
    }
    sort(a1,a1+n1);
    sort(a2,a2+n2);

    smallestDifference(a1,a2,n1,n2);
    return 0;
}