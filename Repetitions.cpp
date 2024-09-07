#include<bits/stdc++.h>
using namespace std;
int main()
{
    string  a;
    cin>>a;
    int long_length=0;int length=0;
    for(long int i=0;i<a.length();i++)
    {
        
        if(a[i]==a[i+1])
        {
           length++;
        }
        else 
        {
            if(length>long_length)
            {
                long_length=length;
            }
           length=0;
        }
    }
cout<<(long_length+1)<<endl;
return 0;
}