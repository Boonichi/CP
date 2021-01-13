#include <bits/stdc++.h>

using namespace std;
int n,a[100000];
void input(){
    cin >> n;
    for (int i =0; i<n; i++) cin >> a[i];
}
void solve(){
    vector<int> stack;
    bool check = false;
    int ans = 0;
    for (int i =0; i < n; i++){
            if (a[i] == 0) stack.push_back(a[i]);
            if (a[i] == 1){
                if (check == false){
                    check = true;
                    stack.push_back(a[i]);
                }
                else{
                    while (stack.back() == 0){
                        stack.pop_back();
                        ans++;
                    }
                    stack.push_back(a[i]);
                }
            }
    }
    cout << ans << endl;
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
        solve();
    }
    return 0;
}