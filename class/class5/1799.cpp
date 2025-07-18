#include <bits/stdc++.h>
using namespace std;
int n,ret,rr;
int a[11][11];

void go(int x, int y, int cnt){
    if(y == n){
        ret = max(ret, cnt);
        return;
    }

    for(int i = 0; i <= x; i++){
        int nx = x-i, ny = y+i, flag = 0;
        for(int j=0; j<n; j++){
            if(nx-j >= 0 && ny-j >= 0) if(a[nx-j][ny-j] == 2) flag = 1;
            if(nx+j < n && ny+j < n) if(a[nx+j][ny+j] == 2) flag = 1;
        }
        if(a[nx][ny] == 0 || flag) continue;
        a[nx][ny] = 2;
        (nx+ny+1 >= n) ? go(n-1,nx+ny+2-n,cnt+1) : go(nx+ny+1,0,cnt+1);
        a[nx][ny] = 1;
    }
    (x == n-1) ? go(x,y+1,cnt) : go(x+1,y,cnt); 
}

void solve(){
    cin >> n;
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin >> a[i][j];

    go(0,0,0);
    cout << ret;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}