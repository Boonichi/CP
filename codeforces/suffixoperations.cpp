#include <bits/stdc++.h>

using namespace std;
long long n,sl,maxx , op ,res,a[1000000],res1;
int vt;
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        sl = 0; maxx = 0; op = 0; res = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n - 1; i++)
            res+= abs(a[i + 1] - a[i]);
        maxx = max(abs(a[1] - a[0]),abs(a[n - 1] - a[n - 2]));
        //cout << res << ' ' << maxx << endl;
        for (int i = 1; i < n - 1; i++){
            maxx = max(maxx,abs(a[i] - a[i - 1]) - abs(a[i + 1] - a[i - 1])+abs(a[i + 1] - a[i]));
        }
        cout << res - maxx;
        cout << endl;
    }    
    return 0;
}