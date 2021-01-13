#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("input.inp","r",stdin);
    //freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n,k;
    cin >> t;
    while  (t--){
        cin >> n >> k;
        int i = 1;
        int ans = 0;
        while (i <= n && k - i >= 0){
            k-=i;
            ans++;
            i++;
        } 
        cout << ans << endl;
    }
    return 0;
}