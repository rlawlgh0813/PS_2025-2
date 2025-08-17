#include <bits/stdc++.h>
using namespace std;
#define INF 1000007
int n,m,c;
int a[51][51], dp[52][52][52];

void solve(){
    cin >> n >> m >> c;
    for(int i=0; i<c; i++){
        int p,q; cin >> p >> q;
        a[p-1][q-1] = 1;
    }

    dp[0][0][a[0][0]] = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            for(int k=0; k<=c; k++){
                if(i-1 >= 0) dp[i][j][k+a[i][j]] += dp[i-1][j][k];
                if(j-1 >= 0) dp[i][j][k+a[i][j]] += dp[i][j-1][k];
                dp[i][j][k+a[i][j]] %= INF;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cout << dp[i][j][1] << " ";
        cout << '\n';
    }
    for(int i=0; i<=c; i++) cout << dp[n-1][m-1][i] << " ";
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}