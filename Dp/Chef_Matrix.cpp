#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <cfloat>
#include <map>
#include <fstream>
#include <sstream>
#include <bits/stdc++.h>
#include <climits>
#include <list>
using namespace std;
typedef long long ll;


int main()
{
  int m,n,p;
  cin>>m>>n>>p;
  vector< vector<ll> > matrix(m+1);
  for(int i=1;i<=m;i++)
     matrix[i].resize(n+1);
     
  for(int i=1;i<=m;i++)
  {
     for(int j=1;j<=n;j++)
     {
        matrix[i][j]=j;
     }
  }
  while(p--)
  {
     int i,j;
     cin>>i>>j;
     matrix[i][j]++;
  }
  
  for(int i=1;i<=m;i++)
  {
     ll sum=0;
     for(int j=n;j>1;j--)
     {
        if(matrix[i][j-1]>matrix[i][j])
        {
           sum=-1;
           break;
        }
        sum=sum+(matrix[i][j]-matrix[i][j-1]); 
     }
     
     cout<<sum<<endl;
  }
}
