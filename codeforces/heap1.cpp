#include <bits/stdc++.h>

using namespace std;
void solve(){
    int n;
    cin >> n;
    int x;
    priority_queue<long long, vector<long long>,greater<long long>> heap;
    for (int i = 0; i < n; i++){
        cin >> x;
        heap.push(x);
    }
    int a,b;
    long long ans = 0;
    while(heap.size() > 1){
        a=heap.top(); heap.pop();
        b=heap.top(); heap.pop();
        ans+=a+b;
        heap.push(a+b);
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
    while (t --){
        solve();
    }
    return 0;
}