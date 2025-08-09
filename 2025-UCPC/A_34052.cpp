#include <bits/stdc++.h>
using namespace std;
int n,sum;

void solve(){
    for(int i=0; i<4; i++){
        int t; cin >> t;
        sum += t;
    }
    cout << ((sum <= 1500) ? "Yes" : "No");
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}