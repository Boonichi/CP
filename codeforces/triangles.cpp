#include <bits/stdc++.h>

using namespace std;
int n;
int ans[10],mxr[10],mxc[10],mnr[10],mnc[10];
char a[5000][5000];
void solve(){
    fill(mxc,mxc+10,0);
    fill(mxr,mxr+10,0);
    fill(mnr,mnr + 10,INT_MAX);
    fill(mnc,mnc + 10,INT_MAX);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int x = a[i][j] - '0';
            mxr[x] = max(mxr[x],i); mxc[x] = max(mxc[x],j);
            mnr[x] = min(mnr[x],i); mnc[x] = min(mnc[x],j);
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int x = a[i][j] - '0';
            ans[x] = max(ans[x],max(mxr[x]-i,i  - mnr[x]) * max(n - 1 - j,j));
            ans[x] = max(ans[x],max(mxc[x]-j,j  - mnc[x]) * max(n - 1 - i,i));
        }
    }
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        fill(ans,ans+10,0);
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) cin >> a[i][j];
        }
        solve();
        for (int i = 0; i < 10; i++) cout << ans[i] << ' ';
        cout << endl;
    }
    return 0;
}