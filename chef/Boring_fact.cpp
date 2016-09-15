#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define VPII vector< pair<int,int> >
#define ll long long
#define sf scanf
#define pf printf

ll mod_pow(ll x,ll n,ll p)
{
   ll res=1,b=x;
   while(n>0)
   {
     if(n & 1)
        res= (res*b)%p;
     b=(b*b)%p;
     n>>=1;
   }
   return res;
}

int main()
{
  int t;
  ll n,p;
  cin>>t;
  while(t--)
  {
    cin>>n>>p;
    if(n>=p)
    {
      cout<<"0"<<endl;
      continue;
    }
    ll result=-1;
    for(ll i=n+1;i<p;i++)
    {
      ll tmp= mod_pow(i,p-2,p);
    //  cout<<tmp<<endl;
      result = (result*tmp)%p; 
    }
    cout<<p+result<<endl;
  }
}
