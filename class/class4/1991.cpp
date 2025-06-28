#include <bits/stdc++.h>
using namespace std;
int n,m,ret;
int know[54];
vector<int> v[54];

void solve(){
    cin >> n >> m;

    int t; cin >> t;
    for(int i=0; i<t; i++){
        int temp; cin >> temp;
        know[temp] = 1;
    }

    for(int i=0; i<m; i++){
        int flag = 0;
        int p; cin >> p;
        for(int j=0; j<p; j++){
            int q; cin >> q;
            v[i].push_back(q);
            if(know[q]) flag = 1;
        }
        if(flag) for(auto x : v[p]) know[x] = 1;
    }

    for(int i=0; i<m; i++){
        int flag = 1;
        for(auto x : v[i]) if(know[x]) flag = 0;
        if(flag){
            ret++;
            cout << ret << " " << i << '\n';
        }
    }
    cout << ret;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    solve();
    return 0;
}