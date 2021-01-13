#include <bits/stdc++.h>

using namespace std;
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int k = s[0] - '0',ans = 0;
        for (int i = 1; i <= s.length(); i++) ans+=i; 
        cout << 10 * (k-1) + ans << endl;
    }
    return 0;
}