#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mx=-1;
        for(int i=1;i<n;i++){
            mx=max(mx,__gcd(i,i+1));
        }
        cout<<mx<<endl;
    }
}