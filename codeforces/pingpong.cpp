#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if (y >= x) cout << x - 1 << ' ' << y;
        if (x > y) cout << x - 1 << ' ' << y;
        cout << endl;
    }
    return 0;
}