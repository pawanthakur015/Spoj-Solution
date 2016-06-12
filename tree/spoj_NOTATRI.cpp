#include<bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long LL;
#define MM(a,x) memset(a, x, sizeof(a))
#define P(x) cout<<#x<<" = "<<x<<endl;
#define P2(x,y) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<endl;
#define PV(a,n) for(int i=0;i<n;i++) cout<<#a<<"[" << i <<"] = "<<a[i]<<endl;
#define TM(a,b) cout<<#a<<"->"<<#b<<": "<<1.*(b-a)/CLOCKS_PER_SEC<<"s\n";

bool cmp(const int i,const int j)
   {
      return i<j;
   }

int main()
{
  int n,m;
  
  cin>>n;
  while(n)
  {
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
       cin>>m;
       arr.push_back(m);
    }
    sort(arr.begin(),arr.end(),cmp);
//    for(int i=0;i<n;i++)
//       cout<<arr[i]<<" ";
    int l,p;
    LL sum=0;
    for(int k=n-1;k>1;k--)
    {
      l=0;
      p=k-1;
      while(l<p)
      {
        if(arr[k]>(arr[l]+arr[p]))
           {
             sum+=(p-l);
             l++;
           }
           else
           {
             p--;
           }
      }
      
    }
    
    cout<<sum<<endl;
    cin>>n;
    
  }
  return 0;
}
