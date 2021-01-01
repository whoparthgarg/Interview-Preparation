/*
For Reference : Check 6_Product_of_Array.png
This is Efficient method
*/

#include<iostream>
using namespace std;
void productOfArray(int a[],int n)
{
    int l[100],r[100];
    for(int i=1;i<n;i++)
    {
        l[0]=1;
        l[i]=l[i-1]*a[i-1];
    }
    for(int i=n-2;i>=0;i--)
    {
        r[n-1]=1;
        r[i]=r[i+1]*a[i+1];
    }

    int output[1000];
    for(int i=0;i<n;i++)
    {
        output[i]=l[i]*r[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<output[i]<<" ";
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

    productOfArray(a,n);
    return 0;
}
