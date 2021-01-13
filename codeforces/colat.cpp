#include <bits/stdc++.h>

using namespace std;
long long unt(long long k){
    long long ans = 1,tam,a = k;
    int kt = 0;
    for (int i = 2; i <= trunc(sqrt(k));i++){
        tam = 0;
        while (a % i == 0){
            tam++;
            a=a/i;
            if (a == 1) kt = 1; 
        }
        ans = ans * (tam + 1);
        if (kt == 1) break;
    }
    if (a != 1) ans = ans * 2;
    return ans;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long k;
    cin >> k;
    long long ans = unt(k);
    if (ans % 2 == 0) cout << "WHITE";
    else cout << "BLACK";
    return 0;
}