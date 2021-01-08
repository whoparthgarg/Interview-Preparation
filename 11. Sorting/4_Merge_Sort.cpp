#include<iostream>
using namespace std;

void merge(int *a,int s,int e)
{
    int mid=(s+e)/2;
    
    int i=s;
    int j=mid+1;
    int k=s;

    int temp[1000];

    while(i<=mid and j<=e)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=a[j];
            j++;
            k++;
        }
    }

    //it might be possible that some elements remain unreached
    while(i<=mid)
    {
        temp[k]=a[i];
        k++;
        i++;
    }
    while(j<=e)
    {
        temp[k]=a[j];
        j++;
        k++;
    }

    //Now copy all elements to original array
    for(int i=s;i<=e;i++)
    {
        a[i]=temp[i];
    }
}

void mergeSort(int a[],int s,int e)
{
    //base case
    if(s>=e)
    {
        return ;
    }

    //recursive case
    
    //follow 3 steps

    // Step.1 Divide
    int mid=(s+e)/2;

    // Step.2 Recursively Sort
    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);

    // Step.3 Merge
    merge(a,s,e);
    
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

    /*
    Time : O(nLogn)
    Space : O(n)
    */
    mergeSort(a,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}