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
        cin >> n >> s;
        bool check = false;
        for (int i = 0; i<= 4; i++){
            if (s.substr(0,i) + s.substr(n - 4 + i, 4 - i) == "2020"){
                cout << "YES" << endl;
                check = true;
                break;
            }
        }
        if (check == false) cout << "NO" << endl;
    }
    return 0;
}