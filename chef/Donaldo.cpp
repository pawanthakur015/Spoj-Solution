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
  int hh,mm,ss,n;
  ll  I;
  char ch,ch1;
  cin>>t;
  vector<ll> vll;
  int k=1;
  while(k++ <= t)
  {
    //cin>>n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     //  cin>>hh>>ch>>mm>>ch1>>ss;
       scanf("%d%c%d%c%d",&hh,&ch,&mm,&ch1,&ss);
       ll tmp= hh*3600+mm*60+ss;
       vll.push_back(tmp);
    }
   // cin>>I;
   scanf("%lld",&I);
    if(n==0){
            //cout<<"case "<<k<<": 0"<<endl;
            printf("Case %d: 0\n",k);
            continue;
        }
    int res=-1;
    sort(vll.begin(),vll.end());
    int j=0;
    queue< long long > q;
    q.push(vll[j]);
    while(j<n)
    {
      while(j<n && (vll[j] - q.front()) < I)
      {
        j++;
        q.push(vll[j]);
      }
      
      int size= q.size()-1;
      res = max(res,size);
      ll tmp = q.front();
      q.pop();
      while(!q.empty() && tmp==q.front())
          q.pop();
    }
    printf("Case %d: %d\n",k,res);
     //cout<<"case "<<k<<": "<<res<<endl;
  }
}
