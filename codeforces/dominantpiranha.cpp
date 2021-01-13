#include <bits/stdc++.h>

using namespace std;
int n,a[1000000],ma,loma = 0;
void input(){
    cin >> n;
    ma = 0;
    for (int i = 1; i <=n;i++) {
        cin >> a[i];
        if (ma < a[i]){
            ma = max(a[i],ma);
            loma = i;
        }
    }
}
int solve(){
    if (loma == 1){
        if (a[loma] > a[loma + 1]) return loma;
    }
    else if (loma == n){
        if (a[loma] > a[loma - 1]) return loma;
    }
    else{
        if (a[loma] > a[loma+1] || a[loma] > a[loma-1]) return loma;
    }
    for (int i = 1; i <= n; i++){
        if (loma != i && a[i] == ma) loma=i;
        if (loma == 1){
            if (a[loma] > a[loma + 1]) return loma;
        }
        else if (loma == n){
            if (a[loma] > a[loma - 1]) return loma;
        }
        else{
            if (a[loma] > a[loma+1] || a[loma] > a[loma-1]) return loma;
        }
    }
    return -1;
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
        cout << solve() << endl;
    }
    return 0;
}