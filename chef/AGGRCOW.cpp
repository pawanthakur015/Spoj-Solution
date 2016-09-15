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

int find1(ll arr[],int index,int n,ll res)
{
   int mid;
  // cout<<"index"<<index<<"n="<<n<<endl;
   while(index<n)
   {
     mid = index+(n-index)/2;
   //  cout<<"mid="<<mid<<endl;     
     if(arr[mid]>=res && arr[mid-1]<res)
        return mid;
     else if(arr[mid]<res)
      {
         index=mid+1; 
     //    cout<<"middd"<<arr[index]<<endl;  
      }
      else
      {
     //   cout<<res<<arr[index]<<endl;
        n=mid-1;
      }
     
   }
  return -1;  
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int N,C;
 //    vector<ll> v;
     cin>>N>>C;
     ll array[N];
     //v.resize(N);
     
     
     for(int i=0;i<N;i++)
     {
        ll tmp;
        cin>>tmp;
        array[i]=tmp;
     }
     int count=1;
     sort(array,array+N);
     int index=0;
     ll res=array[0]+C;
     while(1)
     {
     //  cout<<"N = "<<N<<endl;
       index = find1(array,index,N-1,res);
     //  cout<<"index="<<index<<endl;
       if(index==-1)
         {
            cout<<count<<endl;
            break;
         }
       res+=C;
       count++;      
     }
   }
   return 0;
}
