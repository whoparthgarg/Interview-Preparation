/*
Staircase Search only for
row and column wise sorted 2D array
1st method : linear search n*n
2nd method : binary search n*logn
3rd method : staircase search n
*/
#include<iostream>
using namespace std;

void staircaseSearch(int a[100][100],int n,int key)
{
    if(key<a[0][0] or key>a[n-1][n-1])
    {
        cout<<"Not Found";
        return ;
    }
    else
    {
        int i=0;
        int j=n-1;
        while(a[i][j]!=key)
        {
            if(a[i][j]>key)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        cout<<"Key Found at "<<i<<" "<<j;
    }
}
int main()
{
    //search in row and column wise sorted array is staircase search
    int n;
    cin>>n;

    int a[100][100];
    int val=1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=val;
            cout<<a[i][j]<<" ";
            val++;
        }
        cout<<endl;
    }

    int key;
    cout<<"Key : ";
    cin>>key;

    staircaseSearch(a,n,key);

    return 0;
}