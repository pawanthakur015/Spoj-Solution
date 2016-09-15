#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define VPII vector< pair<int,int> >
#define lli long long int
#define ulli unsigned long long int
#define sf scanf
#define pf printf

int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61};

int main()
{
//   cout << __builtin_popcount (4) << endl;
//   cout << __builtin_popcount (15) << endl;

  int t;
  cin>>t;
  
  ulli a,b,count=0; 
  bool primeCheck[64];
  memset(primeCheck,false,sizeof(primeCheck));
  for(int i=0;i<18;i++)
  {
     primeCheck[primes[i]]=true;
  }
  while(t--)
  {
    cin>>a;
    cin>>b;
    count = 0;
    for(ulli i =a ;i<=b;i++)
    {
       int c =__builtin_popcount (i);
      // cout<<c<<endl;
       if(primeCheck[c])
       {
	 count++;
       }
    }
    cout<<count<<endl;
  }
 
 
   return 0;
}
