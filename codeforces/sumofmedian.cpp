#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,k;
    long long x;
    vector<long long> a;
    float n;
    cin >> t;
    while (t--){
        cin >> n >> k;
        long long ans = 0;
        int sl = 0;
        a.clear();
        for (int i = 0; i < n*k; i++){
            cin >> x;
            a.push_back(x);
        }
        int j = 0, q = n*k - 1;
        while (j <= q){
            sl++;
            if (sl < round(n/2))  j++;
            else q--;
            if (sl == n){
                sl = 0;
                ans+=a[q+1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}