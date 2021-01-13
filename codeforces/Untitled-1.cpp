#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("input.inp","r",stdin);
    //freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,c;
    cin >> n >> c;
    string s;
    int ans = 0;
    for (int i = 0; i<n-1;i++){
        cin >> s;
        ans+=(s[0] - '0') * 60 + (s[2] - '0')*10 + (s[3] - '0') - c;
    }
    cin >> s;
    ans+=(s[0] - '0') * 60 + (s[2] - '0') *10 + (s[3] - '0');
    int h = ans / 3600;
    int m = (ans - h * 3600) / 60;
    int g = ans % 60;
    if (h < 10) cout << '0' << h <<':';
    else cout << h <<':';
    if (m < 10) cout << '0' << m <<':';
    else cout << m <<':';
    if (g < 10) cout << '0' << g;
    else cout << g;
    return 0;
}