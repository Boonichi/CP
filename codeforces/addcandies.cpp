#include <bits/stdc++.h>

using namespace std;
int a[10000];
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << n << endl;
        for (int i = 1; i <= n; i++){
            cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}