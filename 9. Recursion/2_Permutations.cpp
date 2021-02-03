#include<iostream>
using namespace std;
void permute(char *a,int i)
{
    //base case
    if(a[i]=='\0')
    {
        cout<<a<<endl;
        return ;
    }

    //recursive case
    for(int j=i;a[j]!='\0';j++)
    {
        swap(a[i],a[j]);
        permute(a,i+1);

        //backtracking - to restore the original array
        swap(a[i],a[j]);
    }
}
int main()
{
    char inp[1000];
    cin>>inp;

    permute(inp,0);
    return 0;
}