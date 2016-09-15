#include<bits/stdc++.h>
using namespace std;

int doOperation(int arr[],int n)
{
    int maxtmp =1,mintmp=1,res=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            maxtmp= maxtmp*arr[i];
            mintmp = min(mintmp*arr[i],1);
        }
        else if(arr[i]==0)
        {
            mintmp=1;
            maxtmp=1;
        }
        else
        {
            int tmp=maxtmp;
            maxtmp=max(mintmp*arr[i],1);
            mintmp=tmp*arr[i];
        }
        
        if(res<maxtmp)
           res=maxtmp;
    }
    
    return res;
}

int main() {
    
    int t,n,tmp;
    cin>>t;
    while(t--)
    {
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
           cin>>tmp;
           arr[i]=tmp;
       }
       int res = doOperation(arr, n);
       cout<<res<<endl;
    }
}
