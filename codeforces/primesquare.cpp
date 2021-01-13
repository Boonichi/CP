#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n;
    cin >> n;
    if (n == 2){
        for (int i = 0; i < 2; i++){
            for (int j = 0; j < 2; j++) cout << '1' << ' ';
            cout << endl;
        }
    }
    else {
        for (int i = 0; i < n - 1;i++){
            for (int j = 0; j < n; j++){
                if (j >= i && j <= i + 1) cout << '1' << ' ';
                else cout << '0' << ' ';
            }
            cout << endl;
        }
        for (int j =0; j < n; j++){
            if (j == 0 || j == n - 1) cout << '1' << ' ';
            else cout << '0' << ' ';
        }
        cout << endl;
    }
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t --){
        solve();
    }   
    return 0;
}