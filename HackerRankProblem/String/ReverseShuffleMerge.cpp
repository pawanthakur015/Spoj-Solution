#include<map>
#include<set>
#include<ctime>
#include<cmath>
#include<queue>
#include<stack>
#include<bitset>
#include<vector>
#include<cstdio>
#include<string>
#include<cassert>
#include<cstring>
#include<numeric>
#include<sstream>
#include<iterator>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long LL;
#define MM(a,x) memset(a, x, sizeof(a))
#define P(x) cout<<#x<<" = "<<x<<endl;
#define P2(x,y) cout<<#x<<" = "<<x<<", "<<#y<<" = "<<y<<endl;
#define PV(a,n) for(int i=0;i<n;i++) cout<<#a<<"[" << i <<"] = "<<a[i]<<endl;
#define TM(a,b) cout<<#a<<"->"<<#b<<": "<<1.*(b-a)/CLOCKS_PER_SEC<<"s\n";


int main()
{
   string str;
   cin>>str;
   int n=str.length();
   int dec[n],res[n],countString[26],count[26],p,l;
   reverse(str.begin(),str.end());
   MM(countString,0);
   MM(count,0);
   for(int i=0;i<n;i++)
      dec[i]=str[i]-'a';
   for(int j=0;j<n;j++)
   {
      countString[dec[j]]++;
    }
   for(int i=0;i<26;i++)
      count[i]=countString[i]/2;
   for(int i=0;2*i < n;i++)
   {
      for(int k=0;k<26;k++)
      {
         res[i]=k;
         p=0;
         l=0;
         for(int j=0;j<n;j++)
         {
            if(res[p]==dec[j])
              {
                 p++;
                 l=j;
                 if(p>i)
                   break;
              }
         }
         
         if(p<=i)
           continue;
         int want[26]={};
         MM(want,0);
         for(int j=0;j<26;j++)
            want[j]=count[j];
         for(int j=0;j<=i;j++)
            want[res[j]]--;
         int have[26]={};
         MM(have,0);
         for(int j=l+1;j<n;j++)
             have[dec[j]]++;
         int ok=1;
         for(int j=0;j<26;j++)
         {
            if(want[j]<0 || (want[j] > have[j]))
             {
              ok=0;
             }
         }
         
         if(ok)
            break;
         
      }
   }
   string result;
   for(int i=0;2*i<n;i++)
   {
     result +=  char(res[i]+'a'); 
   }  
   cout<<result<<endl;
   return 0;
}
