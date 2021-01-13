#include <bits/stdc++.h>

using namespace std;
int a[10000],n;
void input(){
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> a[i];
        --a[i];
    }
    sort(a,a + n);
}
void solve(){
    vector<vector<int>> dp(n + 1, vector<int>(2*n,INT_MAX));
    dp[0][0] = 0;
    for (int i = 0; i < n + 1; i++){
        for (int j = 0; j < 2 * n - 1; j++) if (dp[i][j] < INT_MAX){
            if (i < n) dp[i+1][j+1] = min(dp[i+1][j+1],dp[i][j] + abs(a[i] - j));
            dp[i][j + 1] = min(dp[i][j+1],dp[i][j]);
        }
    }
    cout << dp[n][2*n - 1] << endl;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        input();
        solve();
    }
    return 0;
}