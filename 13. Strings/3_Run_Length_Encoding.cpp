#include<iostream>
#include<cstring>
using namespace std;

void runLengthEncoding(string s)
{
    for(int i=0;i<s.length();i++)
    {
        //count occurences of current character
        int count=1;
        while(i<s.length() and s[i]==s[i+1])
        {
            count++;
            i++;
        }
        cout<<s[i]<<count;
    }
}

int main()
{
    string s;
    getline(cin,s);

    runLengthEncoding(s);

    return 0;
}