#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define Mod 1000000007

int main()
{
  int t,p=0;
  scanf("%d",&t);
  while(t--)
  {
    string str;
    cin>>str;
    LL arr[10],i=-1;
    memset(arr,0,sizeof(arr));
    while(str[++i]!='\0')
    {
       int val=str[i]-'0';
       int tmp=val;
       while(val--)
         arr[tmp]=(arr[tmp]+arr[val])%Mod;
       arr[tmp]++;
    }
    
    LL sum=0;
    for(int i=0;i<=9;i++)
    {
       sum=(sum+arr[i])%Mod;
    }
    p++;
    printf("Case %d: %lld\n",p,sum);
  }
}

