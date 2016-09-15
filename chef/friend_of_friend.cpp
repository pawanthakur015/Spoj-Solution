#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define VPII vector< pair<int,int> >
#define ll long long

int main()
{
  int t;
  scanf("%d",&t);
  set<int> sf;
  set<int> sff;
  while(t--)
  {
     int id;
     scanf("%d",&id);
     sf.insert(id);
     int n;
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
       int tmp;
       scanf("%d",&tmp);
       sff.insert(tmp);
     }
  }
  set<int>::iterator it;
  for(it=sf.begin();it!=sf.end();++it)
  {
    // cout<<*it<<endl;
     sff.erase(*it);
  }
  cout<<sff.size()<<endl;
  return 0;
}
