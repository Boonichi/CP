#include <bits/stdc++.h>

using namespace std;
int n,a[1000000];
void input(){
    cin >> n;
    for (int i = 0; i < n ; i++) cin >> a[i];
}
void update(int p; int val){
    for (int i = 0; i <= n; i+= i & -i){
        fen[i] = val;
    }
}
int sum(int p){
    int ans = 0;
    for (int i = p; i; i-= i & -i){
        ans+=fen[i];
    }
    return ans;
}
void solve(){
    int fen[1000000];
    for (int i = 0; i < n; i++){
        update(i,)
    }
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    input();
    solve();
    return 0;
}