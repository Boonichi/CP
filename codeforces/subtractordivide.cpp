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
        long long n;
        cin >> n;
        if (n == 1) cout << 0;
        if (n == 2) cout << 1;
        if (n == 3) cout << 2;
        if (n > 3){
            if (n % 2 == 0) cout << 2;
            else cout << 3;
        }
        cout << endl;
    }
    return 0;
}