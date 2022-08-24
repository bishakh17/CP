#include <iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;
    int maxx = INT_MIN;
    int maxy = INT_MIN;
    int minx = INT_MAX;
    int miny = INT_MAX;
    
    for(int i = 0; i<n ; i++){
        int tempx;
        int tempy;
        cin>>tempx;
        cin>>tempy;
        maxx = max(maxx,tempx);
        maxy = max(maxy,tempy);
        miny = min(miny,tempy);
        minx = min(minx,tempx);

    }
    if(maxx<0) maxx = 0;
    if(maxy<0) maxy = 0;
    if(minx>0) minx = 0;
    if(miny>0) miny = 0;
    int temp = maxx-minx+maxy-miny;
    cout<<temp*2<<endl;

}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}