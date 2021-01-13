#include <bits/stdc++.h>

using namespace std;
int l,r;
void solve(){
    cin >> l >> r;
    if (2 * l > r) cout << "YES" << endl;
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
        solve();
    }
    return 0;
}