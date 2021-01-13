#include <bits/stdc++.h>

using namespace std;
int n,k;
vector<int> a(n);
void coutdeque(deque<int> l){
    while (!l.empty()){
        cout << l.back() << " ";
        l.pop_back();
    }
    cout << endl;
}
void input(){
    cin >> n >> k;
    int x;
    a.clear();
    for (int i = 0; i < n; i++){
        cin >> x;
        a.push_back(x);
    }
}
void solve(){
    deque<int> l;
    for (int i = 0; i < k - 1; i++){
        while(!l.empty() && l.back() > a[i]) l.pop_back();
        l.push_back(a[i]);
    }
    for (int i = k - 1; i < n; i++){
        while(!l.empty() && l.back() > a[i]) l.pop_back();
        l.push_back(a[i]);
        cout << l.front() << " ";
        if (a[i-k+1] == l.front()) l.pop_front();
    }
    cout << endl;
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