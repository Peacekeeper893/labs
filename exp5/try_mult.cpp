#include<bits/stdc++.h>
#include<iostream>

using namespace std;
static int len1;
static int len2;

void print(std::vector <int> const &a) {

   for(int i=0; i < a.size(); i++)
   std::cout << a.at(i);
}

template<typename T>
std::string join(std::vector<T> const &vec)
{
    if (vec.empty()) {
        return std::string();
    }
 
    return std::accumulate(vec.begin() + 1, vec.end(), std::to_string(vec[0]),
                [](const std::string& a, T b){
                    return a + std::to_string(b);
                });
}

void printV(std::vector <int> const &a) {

   for(int i=0; i < a.size(); i++)
   std::cout << a.at(i);
}
vector<int> sum(string num1)
{
    int i,j;
    static int carry=0;
    // string num1;
    // cin>>num1;
    static vector<int>running_sum;
    if(running_sum.empty())
        running_sum.push_back(0);
    vector<int> res;
    
    int k=0;
    
    int len1=num1.length();
    int len2=running_sum.size();

    for(i=len1-1,j=len2-1;i>=0 && j>=0;i--,j--)
    {
        int temp_sum;
        
        stringstream str;
        // stringstream str2;
        str << num1[i]; int x; str >> x;
        // str2 << num2[j]; int y; str2 >> y;
        temp_sum=(x)+running_sum[j]+carry;

        if(temp_sum>=10)
        {
            carry=1;
            res.push_back(temp_sum-10); 
        }
        else
        {
            carry=0;
            res.push_back(temp_sum);
        }

    }

    while(i<0 && j>=0)
    {
        int b=running_sum[j]+carry;
        
        if(b>=10)
            {
                b=b-10;
                carry=1;
            }
        else
            carry=0;

        res.push_back(b);
        j--;
    }
    while(j<0 && i>=0)
    {
        stringstream str2;
        str2 << num1[i]; int y; str2 >> y;
        y=y+carry;
        if(y>=10)
            {
                y=y-10;
                carry=1;
            }
        else
            carry=0;
        res.push_back(y);
        i--;
    }

    if(carry==1)
        res.push_back(1);

    reverse(res.begin(), res.end());

    running_sum.clear();
    for (int i=0; i<res.size(); i++)
        running_sum.push_back(res[i]);
    // print(res);

    return running_sum;
}

vector<int> padding(vector<int> s,int j)
{
    for (int i = 0; i < (len2-1)-j; i++)
    {
        s.push_back(0);
    }

    return s;   
}

int main()
{
    int i,j;
    static int carry=0;
    string num1;
    cin>>num1;
    string num2;
    cin>>num2;

    vector<vector<int>> res;
    int k=0;
    
    len1=num1.length();
    len2=num2.length();
    if(len2>len1)
    {
        int temp_l=len1;
        string temp=num1;
        num1=num2;
        len1=len2;
        num2=temp;
        len2=temp_l;
    }

for(j=len2-1;j>=0;j--)
{
    vector<int> temp_sum;
    for(i=len1-1;i>=0;i--)
    {      
        int temp;
      
        stringstream str;
        stringstream str2;
        str << num1[i]; int x; str >> x;
        str2 << num2[j]; int y; str2 >> y;
        temp=(x)*(y)+carry;

        if(temp>=10)
        {
            carry=temp/10;
            temp_sum.push_back(temp%10);  
        }
        else
        {
            carry=0;
            temp_sum.push_back(temp);
        }
    }

    if(carry!=0)
                {
                    temp_sum.push_back(carry);
                    carry=0;
                }

        reverse(temp_sum.begin(), temp_sum.end());
        vector<int> padded_temp_sum;
        padded_temp_sum=padding(temp_sum,j);
        res.push_back(padded_temp_sum);
}

// AT this point the res vector has len2 vectors which must be added together to produce the result;

int vec_in_vec=res.size();
vector<int>Mrunning_sum;

for(int k=0;k<vec_in_vec;k++)
{
    vector<int> temp1=res.at(k);
    std::string s1 = join(temp1);
    Mrunning_sum=sum(s1);
}

printV(Mrunning_sum);
return 0;
}