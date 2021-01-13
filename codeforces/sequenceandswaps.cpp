#include <bits/stdc++.h>

using namespace std;
int n,x,a[100000];
bool checkgood(){
    for (int i = 0; i < n - 1; i++){
        if (a[i] > a[i + 1]) return false;
    }
    return true;
}
void solve(){
    bool good = false;
    int res = 0;
    while (good == false){
        int k = 0,tam;
        bool kt = false;
        for (int i = 0; i < n - 1; i++){
            if (a[i] > a[i + 1]) k = i;
        }
        cout << k << endl;
        int i = k;
        while (i >= 0){
            if (i == -1){
                kt = true;
                res++;
                tam = a[i + 1];
                a[i + 1] = x;
                x= a[i + 1];
            }
            if (a[i] < x){
                kt = true;
                res++;
                tam = a[i + 1];
                a[i + 1] = x;
                x= a[i + 1];
            }
            i--;
        }
        if (checkgood() == true) {
            good = true;
            break;
        }
        if (kt == false) break;
        for (int i = 0; i < n; i++) cout << a[i] << ' ';
        cout << endl;
    }
    if (checkgood() == true) cout << res;
    else cout << -1;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int t = 0;
        bool bad = false;
        cin >> n >> x;
        for (int i = 0 ; i < n; i++){
            cin >> a[i];
            if (a[i] < t) bad = true;
            t = a[i];
        }    
        if (bad == false) cout << 0;
        else solve();
        cout << endl;
    }

    return 0;
}