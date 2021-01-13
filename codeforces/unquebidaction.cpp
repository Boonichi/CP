#include <bits/stdc++.h>
 
using namespace std;
int vt[1000000],kt[1000000];
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int maxx = 0;
        bool check = false;
        for (int i = 1; i <= 200000;i++) kt[i] = 0;
        for (int i = 1; i <= n; i++){
            int x;
            cin >> x;
            kt[x]++;
            vt[x] = i;
            maxx = max(maxx,x);
        }
        for (int i = 1; i <= maxx;i++){
            if (kt[i] == 1){
                check = true;
                cout << vt[i] << endl;
                break;
            }
        }
        if (check == false) cout << -1 << endl;
    }
    return 0;
}