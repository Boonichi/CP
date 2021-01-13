#include <bits/stdc++.h>

using namespace std;
int n,q,k,l;
string s[200000];
vector<string> st;
void input(){
    cin >> k >> l;
    st.clear();
    int x;
    for (int i = 0; i < k;i++){
        cin >> x;
        st.push_back(s[x]);
    }
    sort(st.begin(),st.end());
}
void solve(){
    for (int i = 0; i < st.size(); i++){
        cout << i << endl;
    }
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    string s[200000];
    for (int i = 0; i < n; i++) cin >> s[i];
    cin >> q;
    while (q--){
        input();
        solve();   
    }
    return 0;
}