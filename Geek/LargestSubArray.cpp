#include<bits/stdc++.h>
using namespace std;

int doOperation(int arr[],int n)
{
   for(int i=0;i<n;i++)
      arr[i]= (arr[i]==0?-1:1);
      
   // unordered_map <int , int> hm;
   map<int , int> hm;
    int sum=0,maxLength=1,endOfIndex=-1;
   for(int i=0;i<n;i++)
   {
      sum=sum+arr[i];
      if(sum==0)
      {
        maxLength = i+1;
        endOfIndex=i;
      }
     if(hm.find(sum)!=hm.end())
     {
       if(maxLength < (i-hm[sum]))
       {
          maxLength=(i-hm[sum]);
          endOfIndex=i;
       }
     }
     else
     {
       hm[sum]=i;
     }
   }
   
   cout<<(endOfIndex-maxLength+1)<< " "<<maxLength<<endl;
}

int main() {
    
    int t,n,tmp;
    
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>tmp;
           arr[i]=tmp;
       }
    doOperation(arr, n);
}
