#include <bits/stdc++.h>

using namespace std;
string a,b;
string sumbig(string a){
        int j = a.length() - 1,nho = 1;
        bool kt = false;
        if (a[j] + 1 == 58)  a[j] = '0';
        else a[j] = a[j] + 1;
        if (a[j] == '0') kt = true;
        j--;
        while (kt == true && j >= 0){
            if (a[j] + 1 == 58)  a[j] = '0';
            else a[j] = a[j] + 1;
            if (a[j] == '0') kt = true;
            else kt = false;
            j--;
        }
        if (kt == true) a = '1' + a;
        return a;
}
void solve(){
    int tam,ans;
    string s1;
    ans = 0;
    for (int i = 0; i < a.length();i++) ans+=a[i] - '0';
    while (a != b){
        a = sumbig(a);
        tam = 0; 
        for (int i = 0; i < a.length();i++) tam+= a[i] - '0';
        ans*=tam;
        while (ans > 10){
            s1 = to_string(ans);
            ans = 0;
            for (int i = 0; i < s1.length();i++) ans+= s1[i] - '0';
        }
        if (ans == 9){
            cout << 9;
            break;
        }
    }
    if (ans != 9) cout << ans;
}
int main(){
    //freopen("input.inp","r",stdin);
    //freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a;
    cin >> b;
    solve();
    return 0;
}