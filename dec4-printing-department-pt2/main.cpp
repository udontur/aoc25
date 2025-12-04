#include <bits/stdc++.h>
#define int long long
#define ff first
#define ss second
using namespace std;
int ans=0;
int g[500][500];
int rec(int n, int m){
    int cur=0;
    int di[8]{-1, -1, 0, 1, 1, 1, 0, -1};
    int dj[8]{0, 1, 1, 1, 0, -1, -1, -1};
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            if(g[i][j]){
                int sum=0;
                for(int k =0; k<8; k++){
                    if(i+di[k]>=n||i+di[k]<0) continue;
                    if(j+dj[k]>=m||j+dj[k]<0) continue;
                    sum+=g[i+di[k]][j+dj[k]];
                }
                if(sum<4){
                    cur++;
                    // cout<<i<<" "<<j<<" "<<sum<<"\n";
                    g[i][j]=0;
                }
            }
        }
    }
    return cur;
}
void udontur(){
    string curin;
    int it=0, m=-1;
    while(getline(cin, curin)){
        m=curin.size();
        for(int i =0; i<m; i++){
            if(curin[i]=='@'){
                g[it][i]=1;
            }else{
                g[it][i]=0;
            }
        }
        it++;
    }
    int cur=rec(it, m);
    while(cur>0){
        ans+=cur;
        // cout<<cur<<"\n";
        cur=rec(it, m);
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