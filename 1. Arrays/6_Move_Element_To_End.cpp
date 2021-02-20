#include<bits/stdc++.h>
using namespace std;

void moveElement(int a[],int n,int e)
{
   int i=0;
   int j=n-1;
   while(i<j)
   {
       if(a[i]!=e)
       {
           i++;
       }
       else if(a[i]==e)
       {
           if(a[i]!=a[j])
           {
                swap(a[i],a[j]);
                i++;
                j--;
           }
           else
           {
               j--;
           }
       }
   }
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ele;
    cin>>ele;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    moveElement(arr,n,ele);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}