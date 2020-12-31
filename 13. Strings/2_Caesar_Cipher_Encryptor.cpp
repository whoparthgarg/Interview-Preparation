#include<iostream>
#include<cstring>
using namespace std;

string caesarCipherEncryptor(string s,int key)
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=97 and s[i]<=122)
        {
            s[i]=s[i]+key;
            if(s[i]>122)
            {
                s[i]=96+(s[i]%122);
            }
        }
        else
        {
            s[i]=s[i]+key;
            if(s[i]>90)
            {
                s[i]=64+(s[i]%90);
            }
        }
    }

    return s;
}

int main()
{
    string s;
    getline(cin,s);

    int key;
    cin>>key;

    cout<<caesarCipherEncryptor(s,key);
    return 0;
}