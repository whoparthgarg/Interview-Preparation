#include<iostream>
#include<algorithm>
using namespace std;

void spiral(int arr[100][100],int r,int c)
{
    int startRow=0;
    int startCol=0;
    int endRow=r-1;
    int endCol=c-1;

    while(startRow<=endRow and startCol<=endCol)
    {
        //first row
        for(int i=startCol;i<=endCol;i++)
        {
            cout<<arr[startRow][i]<<" ";
        }
        startRow++;

        //end col
        for(int i=startRow;i<=endRow;i++)
        {
            cout<<arr[i][endCol]<<" ";
        }
        endCol--;

        //bottom row
        if(endRow>startRow)
        {
            for(int i=endCol;i>=startCol;i--)
            {
                cout<<arr[endRow][i]<<" ";
            }
            endRow--;
        }

        //first col
        if(endCol>startCol)
        {
            for(int i=endRow;i>=startRow;i--)
            {
                cout<<arr[i][startCol]<<" ";
            }
            startCol++;
        }
    }
}

int main()
{
    int r,c;
    cin>>r>>c;
    
    int val=1;
    int arr[100][100];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            arr[i][j]=val;
            val++;
        }
    }

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    spiral(arr,r,c);

    return 0;
}