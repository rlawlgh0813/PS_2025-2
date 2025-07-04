#include <bits/stdc++.h>
using namespace std;
int cnt;
int dp[1004][1004];
string a,b;
vector<int> v;

void solve(){
    cin >> a >> b;

    for(int i=0; i<a.length(); i++){
        for(int j=0; j<b.length(); j++){
            if(a[i] == b[j]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    int i = a.length()-1, j = b.length()-1;
    while(i >= 0 && j >= 0){
        if(dp[i-1][j-1] == dp[i][j]){
            v.push_back(a[--i]);
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1]) v.push_back(a[i--]);
        else v.push_back(b[j--]);
    }

    cout << v.size() << '\n';
    if(v.size()) for(int i=v.size()-1; i>=0; i--) cout << (char)v[i];
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    solve();
    return 0;
}