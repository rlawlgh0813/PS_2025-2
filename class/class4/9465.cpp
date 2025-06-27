#include <bits/stdc++.h>
using namespace std;
int n;
int a[2][100004];
int dp[2][100004];

void solve(){
    cin >> n;

    for(int i=0; i<2; i++) for(int j=1; j<=n; j++) cin >> a[i][j];

    dp[0][0] = dp[1][0] = 0;
    dp[0][1] = a[0][1];
    dp[1][1] = a[1][1];
    for(int i=2; i<=n; i++){
        dp[0][i] = max(dp[1][i-2], dp[1][i-1]) + a[0][i];
        dp[1][i] = max(dp[0][i-2], dp[0][i-1]) + a[1][i];
    }
    
    cout << max(dp[0][n], dp[1][n]);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int tc; cin >> tc;
    for(int i=0; i<tc; i++) solve();
    
    return 0;
}