/*
Palindromic string : if from start and end, string is same
then it is palindromic 
Eg :
123321 , radar , level , madam , naman
*/

#include<iostream>
#include<cstring>
using namespace std;

bool palindrome(string s)
{
    int i=0;
    int j=s.length()-1;

    while(i<j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }

    return true;

}

int main()
{
    string s;
    getline(cin,s);

    cout<<palindrome(s);

    return 0;
}