#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    bool flag=true;
    string s="naman";
    stack <char> st;
    int i=0;
    while(s[i] != '\0 ')
    {
        st.push(s[i]);
        i++;
    }

    int len=s.length();
    // cout<<len;

    for(int i=0;i<len;)
    {
        if(s[i]!=st.top())
        {
            flag=false;
            break;
        }
        else
        {
            st.pop();
            i++;
        }
    }

    if(flag==true)
        cout<<"It is a palindrome";
    else
        cout<<"Not a palindrome!";

    return 0;



}