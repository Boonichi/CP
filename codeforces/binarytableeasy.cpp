#include <bits/stdc++.h>

using namespace std;
int ans,n,m;
vector<int> res;
string s[10000];
int movex[] = {0,0,1,1},movey[] = {0,1,0,1};
void solve(int a, int b){
    int sl = 0;
    vector<int> so;
    bool kt[5];
    for (int i = 0; i < 4; i++){
        if (s[a+movex[i]][b+movey[i]] == '1'){
            sl++;
            kt[i] = true;
        }
    }
    if (sl == 4){
        kt[0] = false;
        kt[1] = false;
        kt[2] = false;
        res.push_back(0);
        res.push_back(1);
        res.push_back(2);   
        ans++;
    }
    if (sl == 1){
        if (kt[0] == true){
            res.push_back(a + movex[0]);
            res.push_back(a + movex[1]);
            res.push_back(a + movex[2]);  
            res.push_back(b + movey[0]);
            res.push_back(b + movey[1]);
            res.push_back(b + movey[2]);
            kt[0] = false;
            kt[1] = true;
            kt[2] = true;
        } 
        if (kt[3] == true){
            res.push_back(a + movex[3]);
            res.push_back(a + movex[1]);
            res.push_back(a + movex[2]);  
            res.push_back(b + movey[3]);
            res.push_back(b + movey[1]);
            res.push_back(b + movey[2]);
            kt[3] = false;
            kt[1] = true;
            kt[2] = true;
        }
        if (kt[1] == true){
            res.push_back(a + movex[1]);
            res.push_back(a + movex[0]);
            res.push_back(a + movex[3]);  
            res.push_back(b + movey[1]);
            res.push_back(b + movey[0]);
            res.push_back(b + movey[3]);
            kt[1] = false;
            kt[0] = true;
            kt[3] = true;
        }
        if (kt[2] == true){
            res.push_back(a + movex[2]);
            res.push_back(a + movex[0]);
            res.push_back(a + movex[3]);  
            res.push_back(b + movey[2]);
            res.push_back(b + movey[0]);
            res.push_back(b + movey[3]);
            kt[2] = false;
            kt[0] = true;
            kt[3] = true;
        }
        sl++;
        ans++;
    }
    bool mm = false;
    if (sl == 2){
        for (int i = 0; i < 4; i++){
            if (kt[i] == true){
                if (mm == false){
                    kt[i] = false;
                    res.push_back(a+movex[i]);
                    res.push_back(b+movey[i]);
                    mm = true;
                }   
            }
            else{
                kt[i] = true;
                res.push_back(a+movex[i]);
                res.push_back(b+movey[i]);
            }
        }
        ans++;
        sl++;
    }
    if (sl == 3){
        for (int i = 0; i < 4;i++){
            if (kt[i] == true) {
                res.push_back(a+movex[i]);
                res.push_back(b+movey[i]);
            }
        }
        ans++;
    }
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        cin >> n >> m;
        ans = 0;
        res.clear();
        for (int i = 0; i < n; i++) cin >> s[i];
        for (int i = 0; i < n - 1; i++){
            for (int j = 0; j < m - 1; j++) solve(i,j);
        }
        cout << ans << endl;
        int sl = 0;
        for (int i = 0; i < ans * 6;i++){
            sl++;
            cout << res[i] + 1 << ' ';
            if (sl == 6) {
                cout << endl;
                sl=0;
            }
        }
    }
    return 0;
}