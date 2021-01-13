#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,s1;
    cin >> s;
    s1 = s;
    int sl4 = 0, sl7 = 0;
    bool kt = false,check;
    int n = s.length();
    if (n % 2 != 0){
        for (int i = 1; i <= (s.length() + 1) / 2;i++) cout << '4';
        for (int i = 1; i <= (s.length() + 1) / 2;i++) cout << '7';
    }
    else{
    for (int i = 0; i < s.length();i++){
        check = false;
        if ((s[i] - '0' <= 4 && sl4 <(n / 2)) || (kt == true && sl4 < (n / 2))){
            if (s[i] - '0' < 4 ) kt = true;
            s[i] = '4';
            sl4++;
            check = true;
        }
        else if ((s[i] - '0' <= 7 && sl7 < (n / 2))||(kt == true && sl7 < (n / 2))) {
            if (s[i] - '0' < 7 ) kt = true;
            s[i] = '7';
            sl7++;
            check = true;
        }
        if (check == false){
            if (i > 0 && s[i - 1] - '0' <= 7 && sl7 < (n / 2)){
                if (s[i - 1] - '0' < 7 ) kt = true;
                s[i - 1] = '7';
                sl7++;
                check = true;
                s[i] = '4';
            }
        }
        //cout << s << ' ' << sl4 <<  endl;
        if (check == false) break;
    }
    if (check == true) cout << s << endl;
    else{
        for (int i = 1; i <= (s.length() + 2) / 2;i++) cout << '4';
        for (int i = 1; i <= (s.length() + 2) / 2;i++) cout << '7';
    }
    }
    return 0;
}
