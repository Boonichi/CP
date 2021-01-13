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
        int n;
        string s;
        cin >> n;
        cin >> s;
        string s1 = "trygub";
        int kt[1000];
        fill(kt,kt+1000,0);
        for (int i = 5; i >= 0; i--){
            for (int j = 0; j <= s.length() - 1; j++){
                if (s[j] == s1[i]){
                    cout << s[j];
                    kt[j] = 1;
                }
            }
        }
        for (int i = 0; i <= s.length() - 1;i++){
            if (kt[i] == 0) cout << s[i];
        }
        cout << endl;
    }
    return 0;
}