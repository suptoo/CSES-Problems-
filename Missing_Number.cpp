#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n;
cin>>n;
int arr[n];
for(int i=0;i<n-1;i++)
{
cin>>arr[i];
}
int arr1[n];
for(int i=0;i<n;i++)
{
    arr1[i]=i+1;
}
sort(arr,arr+n-1);
for(int i=0;i<n;i++)
{
    if(arr[i]!=arr1[i])
    {
        cout<<arr1[i]<<endl;
        break;
    }
}
return 0;
}