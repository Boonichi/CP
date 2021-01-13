#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n;
    cin >> t;
    while (t--){
        cin >> n;
        long long ans = 2 * n;
        while (n--){
            cout << ans << ' ';
            ans+=2;
        }
        cout << endl;
    }
    return 0;
}