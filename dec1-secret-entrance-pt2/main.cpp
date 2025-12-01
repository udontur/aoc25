#include <bits/stdc++.h>
#define int long long
#define ff first
#define ss second
using namespace std;
void udontur(){
    string inp;
    int cur=50, k=100, ans=0;
    while(cin>>inp){
        char rotate=inp[0];
        string times=inp.substr(1, inp.size()-1);
        int time=stoi(times);
        // # of full rotations
        ans+=time/100;
        // Final rotation
        if(rotate=='L'){
            cur-=time%100;
        }else{
            cur+=time%100;
        }
        // Out of bound -> passed zero once
        if(cur>99) ans++;
        else if(cur<0) ans++;
        // Make it real
        cur=((cur%100)+100)%100;
    }
    cout<<ans<<"\n";
}
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int tt; cin>>tt; while(tt--)
    udontur();
    return 0;
}