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
        int a,b;
        cin >> a >> b;
        int ans = 0;
        for (int i = 0; i < min(a,b);i++) ans+=2; 
        if (a != b){
            for (int i = min(a,b); i < max(a,b);i++){
                ans+=2;
            }
            ans--;
        }
        cout << ans << endl;
    }
    return 0;
}