/*
Given size , array and required sum
Output pair of three numbers from array
which make sum equal to the required sum
*/

#include<iostream>
#include<algorithm>
using namespace std;

void threeNumberSum(int a[],int n,int k)
{
    //first sort the array
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        int reqSum=k-a[i];
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            if((a[l]+a[r])==reqSum)
            {
                cout<<a[i]<<" "<<a[l]<<" "<<a[r]<<endl;
                l++;
                r--;
            }
            else if((a[l]+a[r])>reqSum)
            {
                r--;
            }
            else if((a[l]+a[r]<reqSum))
            {
                l++;
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

    int k;
    cin>>k;

    threeNumberSum(a,n,k);

    return 0;
}
