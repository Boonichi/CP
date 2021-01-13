#include <bits/stdc++.h>

using namespace std;
string s;
int n;
string solve(){
    string t;
    int l = 0, r = n - 1;
    while (l <= r){
        if (s[l] == s[r]){
            int left = l,right = r;
            bool check = false;
            while(left <= right && s[left] != s[right]){
                left++; right++;
            }
            if (s[left] > s[right]) check = true;
            if (check == false){
                t+=s[l];
                l++;
            }
            else{
                t+=s[r];
                r--;
            }
        }
        else if (s[l] < s[r]){
            t+=s[l];
            l++;
        }
        else{
            t+=s[r];
            r++;
        }
    }
    return t;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    cin >> s;
    cout << solve();
    return 0;
}