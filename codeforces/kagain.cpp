#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> a;
void input(){
    cin >> n;
    int x;
    a.clear();
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }
}
void solve(){
    vector<int> l(n), r(n);
    vector<int> stack;
    for (int i=0; i<n; i++) {
        while (!stack.empty() && a[stack.back()] >= a[i]) stack.pop_back();
        if (stack.empty()) l[i] = -1;
        else l[i] = stack.back();
        stack.push_back(i);
    }
    stack.clear();
    for (int i = n-1; i>=0; i--) {
        while (!stack.empty() && a[stack.back()] >= a[i]) stack.pop_back();
        if (stack.empty()) r[i] = n;
        else r[i] = stack.back();
        stack.push_back(i);
    }
#define res(i) (a[i]*(r[i]-l[i]-1))
    int u = 0;
    for (int i=1; i<n; i++) if (res(u) < res(i)) u = i;
    cout << res(u);
    }
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        input();
        solve();
    }
    cout << 1 << endl;
    return 0;
}