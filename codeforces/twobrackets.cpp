#include <bits/stdc++.h>

using namespace std;
string s;
void solve(){
    cin >> s;
    int l = s.length();
    int i = 0,slt = 0, slv = 0,ans = 0;
    while (i < l){
            if (s[i] == '(') slt++;
            if (s[i] == '[') slv++;
            if (s[i] == ')' && slt){
                slt--;
                ans++;
            }
            if (s[i] == ']' && slv){
                slv--;
                ans++;
            }
            i++;
    }
    cout << ans << endl;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}