#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n;
cin>>n;
int arr[n];long long  count=0;long long  countstep=0;
for(int i=0;i<n;i++)
{
 cin>>arr[i];
}

for(int i=0;i<n-1;i++)
{
   
        if(arr[i]>arr[i+1])
        {
           count=arr[i]-arr[i+1];
           arr[i+1]=arr[i+1]+count;
           countstep=countstep+count;
        }
}
cout<<countstep<<endl;
return 0;
}