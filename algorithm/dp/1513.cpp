#include <bits/stdc++.h>
using namespace std;
#define INF 1000007
int n,m,c;
int a[51][51], dp[52][52][52];
vector<pair<int,int>> v;

void solve(){
    cin >> n >> m >> c;
    for(int i=1; i<=c; i++){
        int p,q; cin >> p >> q;
        a[p-1][q-1] = i;
        v.push_back({p-1,q-1});
    }

    if(a[0][0]) dp[0][0][1]++;
    else dp[0][0][0]++;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int amt;
            int p,q; make_pair(p,q) = v[a[i][j]-1];
            for(int k=0; k<=c; k++){
                if(a[i][j] == 0) amt = 0;
                else if(k == 0 || a[i][j] == 1) amt = 1;
                else if(dp[p][q][k-1]) amt = 1;
                else break;
                if(i-1 >= 0) dp[i][j][k+amt] += dp[i-1][j][k];
                if(j-1 >= 0) dp[i][j][k+amt] += dp[i][j-1][k];
                dp[i][j][k+amt] %= INF;
            }
        }
    }
    for(int i=0; i<=c; i++) cout << dp[n-1][m-1][i] << " ";
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}