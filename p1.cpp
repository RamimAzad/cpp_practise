#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
    cin>>tc;
    while(tc--){
        int n, oc=0, l=0, mx =-1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for (int i=0; i<n; i++){
            if(a[i] %2 == 1){
                oc++;
            }
        }
        
        if(oc%2 == 0 ){
            cout << n<<endl;
        }
        else{
            for(int i = 0; i<n; i++){
                if(a[i] %2 == 0){
                    l++;
                }
                else {
                    mx = max(mx,l);
                    l = 0;                
                }
            }
            cout<<mx<<endl;
        }

        
    }

}
