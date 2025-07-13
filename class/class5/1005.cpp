#include <bits/stdc++.h>
using namespace std;
int n,m,target,ret;
int w[1004], vis[1004], val[1004];
vector<int> v[1004];

void go(int here, int depth){
    if(vis[here]) return;
    vis[here] = 1;

    for(auto there : v[here]){
        if(vis[there]) continue;
        val[depth] = max(val[depth],w[there]);
        go(there, depth+1);
    }
}

void solve(){
    memset(vis, 0, sizeof(vis));
    memset(val, 0, sizeof(val));

    cin >> n >> m;
    for(int i=1; i<=m; i++){
        cin >> w[i];
        v[i].clear();
    }
    for(int i=0; i<m; i++){
        int p,q; cin >> p >> q;
        v[q].push_back(p);
    }
    cin >> target;

    go(target,1);
    for(int i=1; i<m; i++) val[0] += val[i];
    cout << val[0] + w[target] << '\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int tc; cin >> tc;
    while(tc--) solve();
    
    return 0;
}