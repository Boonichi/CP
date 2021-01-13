#include <bits/stdc++.h>

using namespace std;
int a[200000],vt[200000],ans[200000];
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,res = 1000000;
        cin >> n;
        for (int i = 1; i <= n; i++){
            ans[i] = 0;
            vt[i] = 0;
        }
        for (int i = 1; i <= n; i++){
            cin >> a[i];
            if (vt[a[i]] > 0){
                if (i - vt[a[i]] > 1){
                    ans[a[i]] +=1;
                }
            }
            else{
                if (i > 1) ans[a[i]]+=1;
            }
            vt[a[i]] = i;
        }
        for (int i =1; i <= n;i++) {
            if (vt[a[i]] != n) res = min(ans[a[i]] + 1,res);
            else res = min(ans[a[i]],res);
        }
        cout << res << endl;
    }
    return 0;
}