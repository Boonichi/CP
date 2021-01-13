#include <bits/stdc++.h>

using namespace std;
void input(){

}
void solve(){

}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n,x,id;
        cin >> n;
        vector <int> a;
        vector <pair<int,int>> ans;
        for (int i = 0; i < n; i++){
            cin >> x;
            a.push_back(x);
        }
        id = -1;
        for (int i = 1; i < n; i++){
            if (a[i] != a[0]){
                id = i;
                ans.push_back({1,i+1});
            }
        }
        if (id == -1){
            cout << "NO" << endl;
            continue;
        }
        for (int i = 1; i < n; i++){
            if (a[i] == a[0]){
                ans.push_back({id + 1, i + 1});
            }
        }
        cout << "YES" << endl;
        for (auto [x,y] : ans) cout << x << ' ' << y << endl;
    }
    return 0;
}