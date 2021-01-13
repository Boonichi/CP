#include <bits/stdc++.h>

using namespace std;
int a,b,c,d;
void input(){
    cin >> a >> b >> c >> d;
}
void solve(){
    int m,n;
    m = a - c; n = b - d;
    if (abs(n) > 0 and abs(m) > 0) cout << (abs(m) + abs(n) + 2) << endl;
    else cout << (abs(m)+ abs(n)) << endl; 
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