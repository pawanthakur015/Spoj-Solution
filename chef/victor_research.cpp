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

int main()
{
   int n,s;
   vector<ll> v;
   cin>>n>>s;
   v.resize(n+1);
   v[0]=0;
   map<int , list<int> > mp;
   mp[0].push_back(0);
   for(int i=1;i<=n;i++)
   {
      ll x;
      cin>>x;
      v[i]=v[i-1]+x;
      mp[v[i]].push_back(i);
   }
   int count =0;
   for(int j=1;j<=n;j++)
   {
      ll diff= v[j]-s;
      list<int> l;
      l = mp[diff];
      for(list<int>:: iterator it=l.begin(); it!=l.end();++it)
      {
         if(*it < j)
            count++;
      }
   }
   
   cout<<count<<endl;
}
