#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    string s;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >> q;
        cin >> s;
        while(q--){
            int l,r; cin >> l >> r; l--; r--;
            bool kt = true;
            for (int i = 0; i < l and kt ;i++){
                if (s[i] == s[l]) kt = false;
            }
            for (int i = r + 1; i < s.length() and kt ;i++){
                if (s[i] == s[r]) kt = false;
            }
            if (kt == true) cout << "NO";
            else cout << "YES";
            cout << endl;
        }
    }
    return 0;
}