#include <bits/stdc++.h>
#define int long long
#define ff first
#define ss second
using namespace std;
void udontur(){
    int g[500][500];
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
    int ans=0;
    int n=it;
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
                if(sum<4) ans++;
            }
        }
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