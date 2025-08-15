#include <bits/stdc++.h>
using namespace std;
int n,s,e;

void solve(){
    cin >> n >> s >> e;
    
    if((s == 1 && e == n) || (s == n && e == 1)) cout << 0 << '\n';
    else if((s == 1 && e != n) || (s == n && e != 1) || abs(s-e) == 1) cout << 1 << '\n';
    else cout << 2 << '\n';
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int tc; cin >> tc;
    while(tc--) solve();
    return 0;
}