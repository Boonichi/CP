#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(a,a+n); sort(b,b + m);
    int res = 0, i = 0;
    while (i < n){
        if (abs(b[j] - a[i]) <= k){
            check[j] = true;
            j++;
            i++;
        }
        else i++;
    }
    cout << res << endl;    
    return 0;
}