#include <bits/stdc++.h>

using namespace std;
long long a[100000];
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    bool kt = false;
    for (int i = 1; i < n - 1; i++){
        if (a[i] + a[i - 1] > a[i + 1] && a[i] + a[i + 1] > a[i - 1] && a[i - 1] + a[i + 1] > a[i]){
            kt = true;
            cout << "YES";
            break;
        }
    }     
    if (kt == false) cout << "NO";
    return 0;
}