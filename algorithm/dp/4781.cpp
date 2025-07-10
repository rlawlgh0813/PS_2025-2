#include <bits/stdc++.h>
using namespace std;
int n,m;
int dp[10004];
float f;
vector<pair<int,int>> v;

void solve(){
    while(1){
        cin >> n >> f;
        if(n == 0) break;
        m = f * 100;

        memset(dp, 0, sizeof(dp));
        v.clear();
        for(int i=0; i<n; i++){
            int a; float b; cin >> a >> b;
            v.push_back({a,(int)(b*100)});
            dp[(int)(b*100)] = a;
        }

        for(int i=0; i<10000; i++){
            if(!dp[i]) continue;
            for(auto x : v) dp[i+x.second] += x.first;
        }
        cout << dp[m] << '\n';
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    solve();
    return 0;
}