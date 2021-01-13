#include <bits/stdc++.h>

using namespace std;
queue<int> q;
int dirx[10] = {-1,-1,-1,0,0,0,1,1,1};
int diry[10] = {-1,0,1,-1,0,1,-1,0,1};
bool check[1000][1000];
int a[1000][1000];
int m,n;
void bfs(){
    int x = 0,y = 0,v1,v2;
    while (!q.empty()){
        x = q.front();  q.pop(); y = q.front(); q.pop();
        for (int i = 0; i < 9;i++){
            v1 = x + dirx[i]; v2 = y + diry[i];
            if (check[v1][v2] == false && a[v1][v2] == 'W'){
                check[v1][v2] = true;
                q.push(v1); q.push(v2);
            }
        }
    }
}
void solve(){
    int res = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == 'W' && check[i][j] == false){
                res+=1;
                q.push(i); q.push(j);
                check[i][j] = true;
                bfs;
            }
        }
    }
    cout << res;
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++) cin >> a[i][j];
    solve();
    return 0;
}