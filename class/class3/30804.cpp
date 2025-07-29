#include <bits/stdc++.h>
using namespace std;
int n;
int a[200004];

int go(int target){
    int l = 0, r = n-1;
    while(l < r){
        
    }
}

void solve(){
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];

    int ret = 1e9;
    for(int i=0; i<8; i++) for(int j=0; j<9; j++) ret = min(ret, go((1<<i)&(1<<j)));
    cout << ret;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return;
}