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
    while (t--){
        int n,c0,c1,h;
        cin >> n >> c0 >> c1 >> h;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < s.length();i++){
            if (s[i] == '0'){
                if (c0 > h + c1){
                    ans+=c1 + h; 
                }
                else ans+=c0;
            }
            if (s[i] == '1'){
                if (c1 > h + c0){
                    ans+=c0 + h; 
                }
                else ans+=c1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}