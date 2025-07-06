#include <bits/stdc++.h>
using namespace std;
#define INF 1e9
int n, ret = INF;
int val[20][20], dp[20][20], vis[20];

int go(int cur, int dest){
    if(vis[cur]) return INF;

    int &ret = dp[cur][dest];
    for(int i=1; i<n; i++){
        if(vis[i] || val[cur][i] == 0 || i == cur) continue;
        vis[i] = 1;
        ret = min(ret, go(cur, i) + go(i, dest));
        vis[i] = 0;
    }
    return ret;
}

void solve(){
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> val[i][j];
            dp[i][j] = val[i][j];
        }
    }

    for(int i=1; i<n; i++){
        memset(vis, 0, sizeof(vis));
        vis[0] = 1; vis[i] = 1;
        ret = min(ret, go(0,i) + val[i][0]);
    }
    cout << ret;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    solve();
    return 0;
}