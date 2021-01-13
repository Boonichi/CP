#include <bits/stdc++.h>

using namespace std;
bool kt = true;
void check(int ans){
    if (ans == 1|| ans == 0) kt = false;
    else{
        for (int i = 2; i <= trunc(sqrt(ans));i++){
            if (ans % i == 0){
                kt = false;
                break;
            }
        }
    }
}
int main(){
    //freopen("input.inp","r",stdin);
    //freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    string n;
    cin >> n;
    string a;
    long long ans = n[0] - '0';
    for (int i =1; i < n.length();i++) ans=ans * 10 + n[i] - '0';
    check(ans);
    if (kt == false) cout << "no";
    else{
    for (int i = 0; i < n.length(); i++){
        if (n[i] == '3' || n[i] == '4' || n[i] == '7'){
            kt = false;
            break;
        }
        else if (n[i] == '6') a ='9' + a;
        else if (n[i] == '9') a ='6' + a;
        else a = n[i] + a;    
    }
    ans = a[0] - '0';
    for (int i = 1; i < a.length();i++) ans=ans*10 + (a[i] - '0');
    check(ans);
    if (kt == false) cout << "no";
    else cout << "yes";
    }
    return 0;
}