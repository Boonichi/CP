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
        for (int i = s.length() - 1; i >= 0; i--) cout << s[i];
        cout << endl;
    }
    return 0;
}