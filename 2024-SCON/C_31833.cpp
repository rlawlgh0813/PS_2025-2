#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll a,b;

void solve(){
    cin >> n;
    for(int i=0; i<n; i++){
        int t; cin >> t;
        a *= ((t>=10) ? 100 : 10);
        a += t;
    }
    for(int i=0; i<n; i++){
        int t; cin >> t;
        b *= ((t>=10) ? 100 : 10);
        b += t;
    }
    if(b < a) a = b;
    cout << a;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
