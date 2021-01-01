/*
Naive Approach :
Multiply all elements of array
Then divide step by step and store it in a array
Eg :
1,2,3,4 --> Product gives 24
divide 24 by 1 = 24
divide 24 by 2 = 12
divide 24 by 3 = 8
divide 24 by 4 = 6
Output :
24 12 8 6
*/

#include<iostream>
using namespace std;
void productOfArray(int a[],int n)
{
    int product=1;
    for(int i=0;i<n;i++)
    {
        product=product*a[i];
    }
    int output[1000];
    for(int i=0;i<n;i++)
    {
        output[i]=product/a[i];
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