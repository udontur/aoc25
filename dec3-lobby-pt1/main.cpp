#include <bits/stdc++.h>
#define int long long
#define ff first
#define ss second
using namespace std;
void udontur(){
    string inp;
    int ans=0;
    while(getline(cin, inp)){
        char mx=0;
        int n=inp.size(), mxidx=-1;
        for(int i =0; i<n-1; i++){
            if(inp[i]>mx){
                mx=inp[i];
                mxidx=i;
            }
        }
        char mx2=0;
        for(int i =mxidx+1; i<n; i++){
            if(inp[i]>mx2){
                mx2=inp[i];
            }
        }
        ans+=mx2-'0'+10*(mx-'0');
        // cout<<mx<<" "<<mx2<<"\n";
    }
    cout<<ans<<"\n";
}
int32_t main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    // freopen("sample.txt", "r", stdin);
    // int tt; cin>>tt; while(tt--)
    udontur();
    return 0;
}