#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int a[x][y];
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                cin >> a[i][j] ;
            }
        }
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                cout << a[i][j] ;

            }
            cout<<endl;
        }
    //     int xmin=1e9,xmax=0, ymin=1e9, ymax =0;
    //     for(int i=0; i<x; i++){
    //         for(int j=0; j<y; j++){
    //             if(a[i][j] == 1) {
    //                 xmin = min (i, xmin);
    //                 xmax = max(i, xmax) ;

    //                 ymin = min(j,ymin);
    //                 ymax = max(j,ymax);
    //             }
    //         }
            
    //     }
    //     int len = xmax-xmin+1;
    //     int wid = ymax-ymin+1;
    //     int area = len*wid;
        
    //     cout<< area <<endl;

    }
    return 0;
}