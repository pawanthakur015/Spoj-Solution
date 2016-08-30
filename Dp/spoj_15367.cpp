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

int main()
{
  int count=0,n;
  list<int>l;
  list<int>::iterator t,t1,t2,tmp;
  t=l.begin();
  while(scanf("%d",&n)!=EOF)
  {
    if(n==-1)
    {
      printf("%d\n",(*t));
      tmp=t;
      t++;
      t1=t;
      t--;
      l.erase(tmp);
      if(t!=l.begin())
         t--;
      t2=t;
      if(count&1)
        t=t2;
      else
        t=t1;
      count--;
    }
    else if(n==0)
    {
      l.clear();
      count=0;
      t=l.begin();
      printf("\n");
    }
    else
    {
      l.push_back(n);
      count++;
      if(count&1)
      {
         t++;
      }
    }
  }
  
  return 0;
}
