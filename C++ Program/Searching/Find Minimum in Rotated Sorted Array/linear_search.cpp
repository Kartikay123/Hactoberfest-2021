#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int n,int k)
{
bool flag=false;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==k)
    {
      flag=true;
      break;
    }
  }
  return flag;
}
int main()
{
  int n,k;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++)
  {
   cin>>arr[i];
  }
  cout<<linearSearch(arr,n,k)<<endl;
  return 0;
}
  
