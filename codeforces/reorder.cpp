#include <bits/stdc++.h>

using namespace std;
int n,m,a[10000000];
void input(){
    cin >> n >> m;
    for (int i = 0; i < n;i++) cin >> a[i];
}
void solve(){
    int ans = 0;
    for (int i = 0; i < n;i++) ans+= a[i];
    if (ans == m) cout << "YES" << endl;
    else cout << "NO" << endl;
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