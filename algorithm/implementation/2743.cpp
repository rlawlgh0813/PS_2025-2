#include <bits/stdc++.h>
using namespace std;
int n;
long long ret;
long long a[100004];

void solve(){
    cin >> n;
    ret = 0;
    for(int i=0; i<n; i++){
        long long t; cin >>t;
        ret += t;
    }
    if(ret == 0) cout << ret;
    else if(ret < 0) cout << "-";
    else cout << "+";
    cout << '\n';

}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    for(int i=0; i<3; i++) solve();
    return 0;
}