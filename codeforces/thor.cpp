#include <bits/stdc++.h>

using namespace std;
int n,vt = 0,i = 0,a[1000000],b[1000000],fen[1000000];;
void update(int p, int value){
    for (int i = p; i <= n; i+=i & (-i)){
        if (fen[i] + value < 0) fen[i]= 0;
        else fen[i]+=value;
    }
}
int get(int p){
    int ans = 0;
    for (int i = p; i; i-=i & (-i)){
        ans+=fen[i];
    }    
    return ans;
}
void solve(){
    if (a[i] == 1) {
        update(b[i],1);
        cout << get(n) << endl;
    }
    if (a[i] == 2) {
        update(b[i],-fen[b[i]]);
        cout << get(n) << endl;
    }
    if (a[i] == 3){
        int kt = 0; read[i] =
        while (kt < b[i])
            if (a[vt] == 1) {
                update(b[i],-1);
                kt++;
            }
        cout << get(n) << endl;
    }
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> n >> q;
    while(q--){
        cin >> a[i] >> b[i];
        solve();
        i++;
    }
    return 0;
}