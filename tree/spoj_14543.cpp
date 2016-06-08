//------------RANGESUM - Range Sum--------------
#include <bits/stdc++.h>
#define LL long long int
#define Mod 1000000007
#include<algorithm>
#include<cstdio>
#define end 524288
#define start 362144

using namespace std;
int arr[end];

long long sum(int l,int r)
{
   long long add=0;
   add = add+arr[l];
   if(r>l)
     add = add+arr[r];
   while(l/2!=r/2)
   {
      if(l%2==0)
      {
        add=add+arr[l+1];
        
      }
      if(r%2!=0)
      {
        add=add+arr[r-1];
      }
      l=l/2;
      r=r/2;
   }
  return add;   
}

void update(int l,int x)
{
    while(l!=1)
    {
     arr[l]+=x;
     l=l/2;
    }
}

int main()
{
   int n;
   memset(arr,0,sizeof(arr));
   cin>>n;
   for(int i=1;i<=n;i++)
      cin>>arr[start+i];
  for(int p=(end-1)/2;p>=0;p--)
     {
        arr[p] = arr[2*p]+arr[2*p+1];
     }
    int neg=0;
   int query,mod,l,r,x;
   cin>>query;
//   for(int i=1;i<end;i++)
//   {
//      cout<<arr[i]<<" ";
//   }
    while(query--)
    {
      cin>>mod;
      if(mod==1)
      {
        cin>>l>>r;
        l= start+l+neg;
        r= start+r+neg;
        cout<<sum(l,r)<<endl;
      }
     if(mod==2)
      {
        cin>>x;
        update(start+neg,x);
        neg--;
      }
    }    
}
