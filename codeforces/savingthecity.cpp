#include <bits/stdc++.h>

using namespace std;
vector<int> stack;
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; int a,b;
    string s;
    cin >> t;
    while (t--){
        cin >> a >> b;
        cin >> s;
        int n = s.length();
        int c = 1000000;
        long long res = 0;
        for (int i =0; i < n;i++){
            if (s[i] == '1'){
                res+=min(a,b*c);
                c = 0;
            }
            else c++;
        }
        cout << res << endl;
    }    
    return 0;
}