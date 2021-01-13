#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        cout << 2 << endl;
        float n,i = 1;
        cin >> n;
        float ma = n;
        while (i != ma){
            cout << n << ' ' << ma - i << endl;
            n = round((n + (ma - i)) / 2);
            i++;
        }
    }
    return 0;
}