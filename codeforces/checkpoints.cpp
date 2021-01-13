#include <bits/stdc++.h>

using namespace std;
using ll =  long long;
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,res[10000];
    cin >> t;
    while (t--){
        long long k;
        int vt = 1;
        fill(res,res+10000,0);
        cin >> k;
        if (k % 2 == 1) cout << -1;
        else{
        res[1] = 1; k-=2;
        while (k > 0){
            int i;
            for (i = 2; (1ll << i) - 2 <= k;i++);
            vt+=(i - 2);
            res[vt] = 1;
            k= k - ((1ll << (i - 1)) - 2);
        }
        cout << vt << endl;
        for (int i = 1; i <= vt; i++) cout << res[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}