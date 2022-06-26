#include<bits/stdc++.h>
#include<iostream>

using namespace std;


void print(std::vector <int> const &a) {

   for(int i=0; i < a.size(); i++)
   std::cout << a.at(i);
}

int main()
{
    int i,j;
    static int carry=0;
    string num1;
    cin>>num1;
    string num2;
    cin>>num2;

    vector<int> res;
    int k=0;
    
    int len1=num1.length();
    int len2=num2.length();

    for(i=len1-1,j=len2-1;i>=0 && j>=0;i--,j--)
    {
        int temp_sum;
        
        stringstream str;
        stringstream str2;
        str << num1[i]; int x; str >> x;
        str2 << num2[j]; int y; str2 >> y;
        temp_sum=(x)+(y)+carry;

        if(temp_sum>=10)
        {
            carry=1;
            res.push_back(temp_sum-10);
            k++;   
        }
        else
        {
            carry=0;
            res.push_back(temp_sum);
            k++;
        }

    }

    while(i<0 && j>=0)
    {
        stringstream str2;
        str2 << num2[j]; int y; str2 >> y;
        res.push_back(y);
        j--;
    }
    while(j<0 && i>=0)
    {
        stringstream str2;
        str2 << num1[i]; int y; str2 >> y;
        res.push_back(y);
        i--;
    }

    if(carry==1)
        res.push_back(1);

    reverse(res.begin(), res.end());

    print(res);



return 0;

}