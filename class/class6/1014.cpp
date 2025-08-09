#include <bits/stdc++.h>
using namespace std;
#define INF 10000000000
int n,m;
int dp[11][1<<10];

void solve(){
    cin >> n >> m;
    memset(dp,0,sizeof(dp));

    for(int i=0; i<n; i++){
        string s; cin >> s;
        for(int j=0; j<s.size(); j++) if(s[j] == 'x') dp[i][1 << (s.size()-1-j)] = 1;
    }

    for(int i=0; i<m; i++){
        for(int j=0; j != (); j++){

        }
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int tc; cin >> tc;
    while(tc--) solve();
    return 0;
}