#include <bits/stdc++.h>

using namespace std;
bool kt[1000];
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n,m,x,res = 0;
        cin >> n >> m;
        for (int i = 0; i <= 1000; i++) kt[i] = false;
        for (int i = 0; i < n; i++){
            cin >> x;
            kt[x] = true;
        }
        for (int i = 0; i < m; i++) {
            cin >> x;
            if (kt[x] == true) res++;
        }
        cout << res << endl;
    }
    return 0;
}