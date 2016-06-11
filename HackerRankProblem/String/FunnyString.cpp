#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int t;
    cin>>t;
    string str;
    while(t--)
        {
        cin>>str;
        int i,j,k,l;
        k=str.length()-1;
        for( i=0,j=1,l=k-1;i<=l;i++,j++,k--,l--)
            {
            if(abs(str[i]-str[j])!=abs(str[k]-str[l]))
                break;
        }
        if(i>l)
            cout<<"Funny"<<endl;
        else
            cout<<"Not Funny"<<endl;
}
    return 0;
}
