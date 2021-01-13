#include <bits/stdc++.h>

using namespace std;
#define ll long long
long long M = 1e9 + 7;
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t; 
    while (t--){
        ll n,k;
        cin >> n >> k; 
        if (k > n / 2){
            if (k == n) cout << 1;
            else cout << 1 + 2 * (k - (n / 2));
        }
        else cout << 2 * k;
        cout << endl;
    }    
    return 0;
}