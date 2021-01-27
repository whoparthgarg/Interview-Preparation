#include<iostream>
using namespace std;

int firstDuplicate(int a[],int n)
{
    int i,j;
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                return a[i];
            }
        }
    }

    return -1;
}

int main()
{
    int arr[]={2,1,3,4,3,2,5,2};
    int n=sizeof(arr)/sizeof(int);

    cout<<firstDuplicate(arr,n);
    
    return 0;    
}
