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
  int t;
  string str;
  scanf("%d",&t);
  cin>>str;
  string tmp="abcdefghijklmnopqrstuvwxyz";
  map<char,int> mp;
  for(int i=0;i<tmp.length();i++)
  {
     mp[tmp.at(i)]=i;
  }
  string perm="";
  while(t--)
  {
   //  sf("%s",&perm);
   cin>>perm;
     string res="";
     char ch;
     for(int i=0;i<perm.length();i++)
     {
        if((int)(perm.at(i))>65 && (int)(perm.at(i))<91)
          {
             ch =(char) ((int)perm.at(i)+32);
             int pos = mp[ch];
             res = res + (char)((int)str.at(pos)-32); 
          }
          
          else if(perm.at(i)=='_')
          {
            char ch=' ';
            res =res + ch;
          //  cout<<res<<endl;
          }       
          else if(perm.at(i) == '.' || perm.at(i)==',' || perm.at(i)=='?' || perm.at(i)=='!')
                res=res+perm.at(i);
          else
            {
             
             ch = perm.at(i);
             //cout<<ch<<endl;
             int pos = mp[ch];
             res = res + (str.at(pos)); 
            } 
          
     }
   cout<<res<<endl;  
 //   pf("%s \n",res);
  }
}
