#include <bits/stdc++.h>

using namespace std;
# define M_PI 3.14159265358979323846
int main(){
    //freopen("input.inp","r",stdin);
    //freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    int n;
    while (t--){
        float ans;
        cin >> n;
        cout << fixed << setprecision(6) << 2*(M_PI) * (cbrt(n / (2 * M_PI)) * cbrt(n / (2 * M_PI))) * 3 << endl;
    }
    return 0;
}