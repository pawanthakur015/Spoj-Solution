#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define VPII vector< pair<int,int> >

int main()
{
  int m,n,p,i,j;
  VPII ar;
// vector< pair<int,int> > VPII;
 cin>>n>>m;
 cin>>p;
 ar.resize(p);
 for(int i=0;i<p;i++)
 {
   cin>>ar[i].F>>ar[i].S;
 }
 
 sort(ar.begin(),ar.end());
  j=0;
 for(int i=1;i<=n;i++)
 {
   map<int,int> mkpair;
   while(j<ar.size() && ar[j].F==i)
   {
      mkpair[ar[j].S]++;
      if(ar[j].S > 1  && mkpair.count(ar[j].S-1)==0)
        mkpair[ar[j].S-1]=0;
      if(ar[j].S < m && mkpair.count(ar[j].S+1)==0)
        mkpair[ar[j].S+1]=0;
      j++;
   }
   
   int res= m-1;
   for(map<int,int>::iterator it = mkpair.begin();it!=mkpair.end();++it)
   {
      if(it->F == (m))
         continue;
       if(mkpair.count(it->F+1)!=0)
       {
         if((it->F + it->S) > (it->F+1+mkpair[it->F+1]))
         {
             res=-1;
             break;
         }
         res+=((mkpair[it->F+1])-(it->S));
      //   cout<< "---"<<res <<endl;
       }
      else
      {
       if(it->S > 1)
       {
         res=-1;
         break;
       }  
       res+=it->S;
      }
   }
   
   cout<< res << endl;
 }
}
