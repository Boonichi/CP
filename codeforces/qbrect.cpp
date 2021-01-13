#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n,m;
    cin >> m >> n;
    int result = 0;
    vector<int> f(n, 0);
    vector<int> l(n), r(n);
    while (m--) {
        for (int j=0; j<n; j++) {
            int a; cin >> a;
            if (a == 0) f[j] = 0;
            else f[j] += 1;
        }
        struct pack { int f, id; };
        vector<pack> q;
        for (int j=0; j<n; j++) {
            while (!q.empty() && q.back().f >= f[j]) q.pop_back();
            if (q.empty()) l[j] = -1;
            else l[j] = q.back().id;
            q.push_back({f[j], j});
        }
        q.clear();
        for (int j=n-1; j>=0; j--) {
            while (!q.empty() && q.back().f >= f[j]) q.pop_back();

            if (q.empty()) r[j] = n;
            else r[j] = q.back().id;

            q.push_back({f[j], j});
        }
        for (int j=0; j<n; j++) {
            result = max(result, f[j]*(r[j]-l[j]-1));
        }
    }
    cout << result;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie();
    solve();
    return 0;
}