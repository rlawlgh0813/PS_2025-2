#include <bits/stdc++.h>
using namespace std;
int n,m,ret;

void solve(){
    cin >> n >> m;
    ret = min(n * 100, m * 100);
    cout << ret/2;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}