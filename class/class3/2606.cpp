#include <bits/stdc++.h>
using namespace std;
int n,m,ret;
int vis[104];
vector<int> v[104];

int go(int here){
    vis[here] = 1;

    int ret = 1;
    for(auto there : v[here]){
        if(vis[there]) continue;
        ret += go(there);
    }
    return ret;
}

void solve(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a,b; cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    cout << go(1);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}