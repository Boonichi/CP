#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("input.inp","r",stdin);
    //freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,so;
    int sl,k;
    cin >> s >> k;
    bool kt = false;
    sl = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '.') kt = true;
        if ((kt == true) && (s[i] != '.')) sl++;
    }
    so = "";
    for (int i = 0; i < s.length() - k;i++){
        so=so + s[i];
    }
    float x = stof(so);
    so = "";
    for (int i = 0; i < k; i++) so = so + s[s.length() - k + i];
    float y = stof(so);
    float mau = 9;
    for (int i = 1; i < k;i++) mau=mau*10+9;
    for (int i = 1; i <= sl - k ;i++) mau = mau * 10;
    mau = int(mau);
    y = int(y);
    float ans = y + x * mau;
    ans = int(ans);
    x = ans; y = mau;
    while (x != y){
        if (x > y){
            x -= y;
        }
        else y-=x;
    }
    cout << ans / x << '/' << mau / x;
    return 0;
}