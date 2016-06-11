#include<bits/stdc++.h>
using namespace std;

string str="GACT";
string text;
int arr[4];
int ret_index(int i,int n)
{
   for(int j=0;j<4;j++)
   {
      if(str[j]==text[i])
        return j;
   }
   assert(false);
}

bool ok(int n)
{
   for(int i=0;i<4;i++)
   {
       if(arr[i]>n/4)
         return false;
   }
   return true;
}
int main()
{
   int n;
   cin>>n;
   cin>>text;
   for(int i=0;i<n;i++)
   {
      ++arr[ret_index(i,n)];
   } 
   if(ok(n))
   {
     cout<<"0"<<endl;
     return 0;
   }
   int j=0;
   int result=n;
   for(int i=0;i<n;i++)
   {
     while(j<n && !ok(n))
     {
       --arr[ret_index(j++,n)];
       
     }
     if(ok(n))
       result=min(result,j-1);
     ++arr[ret_index(i,n)];
   }
   
   cout<<result<<endl;
   return 0;
}
