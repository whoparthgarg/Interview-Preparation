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
