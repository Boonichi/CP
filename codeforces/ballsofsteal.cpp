#include <bits/stdc++.h>

using namespace std;
int n,k,a[1000],b[1000];
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        cin >> n >> k;
        for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
        int kt = 0;
        for (int i = 0; i < n; i++){
            int sl = 0;
            for (int j = 0; j < n; j++){
                if (j != i){
                   if (abs(a[i] - a[j]) + abs(b[i] - b[j]) <= k){
                       sl++;
                   } 
                }
            }
            if (sl == n - 1){
                kt = 1;
            }
        }
        if (kt == 1) cout << 1;
        else cout << -1;
        cout << endl;
    }
    return 0;
}