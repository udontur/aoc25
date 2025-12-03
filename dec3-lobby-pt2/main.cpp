#include <bits/stdc++.h>
#define int long long
#define ff first
#define ss second
using namespace std;
bool isStringGreater(string a, string b){
    // is a > b
    // cout<<a<<" "<<b<<"\n";
    if(a.size()>b.size()) return true;
    else if(a.size()<b.size()) return false;
    else{
        for(int i =0; i<a.size(); i++){
            if(a[i]>b[i]){
                return true;
            }else if(a[i]<b[i]){
                return false;
            }
        }
    }
    return false;
}
string rec(string s, int cidx, int cnt){
    if(cnt>=12) return "";
    char prevx=0;
    string mx="";
    for(int i =cidx; i<s.size(); i++){
        if(s[i]>prevx){
            string cur=rec(s, i+1, cnt+1);
            // cout<<cidx<<" "<<i<<" "<<cur<<"\n";
            if(isStringGreater(s[i]+cur, mx)){
                mx=s[i]+cur;
            }
            prevx=s[i];
        }
    }
    return mx;
}
void udontur(){
    string inp;
    unsigned long long ans=0;
    while(getline(cin, inp)){
        int n=inp.size();
        // cout<<inp<<"\n";
        string cur=rec(inp, 0, 0);
        cout<<cur<<"\n";
        long long curn=stoll(cur);
        ans+=curn;
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