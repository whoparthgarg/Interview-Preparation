#include<iostream>
using namespace std;
bool checkMontonic(int a[],int n)
{
    bool inc=false;
    bool dec=false;

    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            inc=true;
        }
        else if(a[i]>=a[i+1])
        {
            dec=true;
        }
    }

    return (!inc || !dec);
}
int main()
{
    int n;
    cin>>n;

    int arr[1000];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<checkMontonic(arr,n);

    return 0;
}