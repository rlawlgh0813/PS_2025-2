#include <bits/stdc++.h>
using namespace std;
#define INF 1e9
int a[12], block[6];
int ret = INF;

void go(int x, int y){
    if(x == 9 && y == 9){
        int cnt = 0;
        for(int i=1; i<6; i++) cnt += block[i];
        ret = min(ret, cnt);
    }
    if(!a[x][y]) return;
    for()
}

void solve(){
    for(int i=0; i<10; i++){
        for(int j=9; j>=0; j--){
            int t; cin >> t;
            if(t) a[i] |= (1<<j);
        }
    }
    go(0,0);
    cout << ((ret == INF) ? -1 : ret);
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}