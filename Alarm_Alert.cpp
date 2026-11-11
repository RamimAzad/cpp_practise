#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long  t;
    cin>>t;
    while(t--){
        long long x, y, d;
        long long a, b;
        
        cin >>x>>y>>d ;
        a = x;
        b = y;
        while(1){
            if(abs(a-b)<=d){
                cout<<max(a,b)<<endl;
                break;
            }
            if(a<b){
                a = a+x;
            }
            if(b<a){
                b = b+y;
            }
            
        }

    }
    return 0;
}