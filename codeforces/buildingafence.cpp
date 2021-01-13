#include <bits/stdc++.h>

using namespace std;
int dp[200001],a[200001];
bool build(){
    int n,k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    int i = 1;
    int mx,mn;
    mx = a[0]; mn = a[0];
    while (i < n){
        mx = min(mx + k - 1,a[i] + k - 1);
        mn = max(mn - k + 1,a[i]);
        if (mn > mx) return false;
        i++;
    }
    if (!(mn <= a[n - 1] && a[n - 1] <= mx)) return false;
    return true;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        if (build() == true) cout << "YES";
        else cout << "NO";
        cout << endl;
    }    
    return 0;
}