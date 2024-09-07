#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arreven[n];int arrodd[n];int j=0;int k=0;

    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            arreven[j]=i;j++;
        }
        else 
        {
            arrodd[k]=i;k++;
        }
    }
    if( n<=3 && n>1)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {  
        int w=0;
   for (int i=0;i<n;i++)
   {
    if(i<j)
    {
  cout<<arreven[i]<<" ";
    }
    else 
    {
   cout<<arrodd[w]<<" ";
   w++;
    }
   }
    }
return 0;
}