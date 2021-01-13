#include <bits/stdc++.h>

using namespace std;
vector<string> res;
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    bool kt = false;
    for (int i = 0 ; i <= n; i++){
        string s;
        cin >> s;
        if (kt == false){
            if (s[0] == 'O' && s[1] == 'O'){
                s[0] = '+';
                s[1] = '+';
                kt = true;
            }
            if (kt == false && s[3] == 'O' && s[4] == 'O'){
                s[3] = '+';
                s[4] = '+';
                kt = true;
            }
        }
        res.push_back(s);
    }
    if (kt == false) cout << "NO";
    else{
        cout << "YES" << endl;
        for (string s : res) cout << s << endl;
    }
    return 0;
}