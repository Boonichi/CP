#include <bits/stdc++.h>

using namespace std;
int n,x,a[10000],b[10000],c[10000];
string blank;
bool kt;
void input(){
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i <= x; i++) c[i] = 0;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        c[b[i]]+=1;
    }
}
void solve(){
    for (int i = 0; i < n; i++){
        int j = x;
        kt = false;
        while(j > 0){
            if (a[i] + j <= x && c[j] > 0){
                c[j]--;
                kt = true;
                break;
            }
            j--;
        }
        if (kt == false) break;
    }
    if (kt == false) cout << "NO" << endl;
    else cout << "YES" << endl;
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