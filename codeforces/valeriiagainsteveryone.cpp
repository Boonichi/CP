#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<long long, long long> mp;
    int t;
    cin >> t;
    while (t--){
        mp.clear();
        int n,ans = 0;
        cin >> n;
        for (int i = 0; i < n;i++){
            int x;
            cin >> x;
            mp[x]++;
            if (mp[x] == 2) ans++;
        }
        if (ans) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}