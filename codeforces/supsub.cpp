#include <bits/stdc++.h>

using namespace std;
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a[100000];
    cin >> n;
    for (int i = 0; i < n;i++) cin >> a[i];
    int ans = 0;
    for (int i = 0; i < n;i++){
        for (int j = 0; j <= i; j++) ans+=a[j];
    }
    cout << ans << endl;
    return 0;
} 