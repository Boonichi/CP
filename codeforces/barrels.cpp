#include <bits/stdc++.h>

using namespace std;
int n,k,a[2000000];
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> k;
        for (int j = 0; j < n; j++) cin >> a[j];
        sort(a,a+n);
        reverse(a,a+n);
        long long ans = 0;
        for (int j = 0; j <= k; j++) ans+=a[j];
        cout << ans << endl;
    }
    cout << "no";
    return 0;
}