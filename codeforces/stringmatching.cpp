#include <bits/stdc++.h>

using namespace std;
#define ll long long
long long M = 1e9 + 7;
vector<ll> h1(1000000),h2(1000000),p(1000000);
ll get_hash(int l, int r){
    if (l == 0) return h1[r];
    ll cur = (h1[r] - h1[l] * p[r - l])%M;
    cur = (cur + M * M) % M;
    return cur;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,s1;
    cin >> s >> s1;
    p[0] = 1;
    for (int i = 1; i < s.length();i++){
        p[i] = (p[i - 1] * 31) % M;
    }
    for (int i = 0; i < s.length();i++){
        int c = s[i] - 'a' + 1;
        h1[i + 1] = (h1[i] * 31 + (c * p[i])) % M;
    }
    for (int i = 0; i < s1.length();i++){
        int c = s1[i] - 'a' + 1;
        h2[i + 1] = (h2[i] * 31 + (c * p[i]))%M;
    }
    int res = 0;    
    for (int i = 0; i < s.length() - s1.length() + 1; i++){
        cout << h2[s1.length()] << ' ' << get_hash(i,i + s1.length()) << endl;
        if (get_hash(i,i + s1.length()) == h2[s1.length()]) res++;
    }
    cout << res << endl;
    return 0;
}