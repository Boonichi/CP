#include <bits/stdc++.h>

using namespace std;

int n,a[1000000];
void input(){
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
}
void solve(){
    vector<int> tree(n,INT_MAX);
    int height = 0;
    tree[0] = 0;
    for (int i = 1; i < n; i++){
        if (i - 1 > 0 && a[i - 1] > a[i]) height++;
        tree[i] = tree[height] + 1;
    }
    cout << tree[n - 1] << endl;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        input();
        solve();
    }    
    return 0;
}