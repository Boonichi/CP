#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> adj;
int n,m;
int visited[100000],res[100000],parent[100000];
int bfs(int s, int t){
    queue<int> q;
    q.push(s);
    visited[s] = 1;
    res[s] = 1;
    while (!q.empty()){
        int x = q.front();
        q.pop();
        for (int next : adj[x]){
            if (visited[next] == 0){
                visited[next] = 1;
                parent[next] = x;
                res[next] = res[x] + 1;
                if (next == t) return 1;
                q.push(next);
            }
        }
    }
    return 0;
}
int main(){
    //freopen("input.inp","r",stdin);
    //freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) adj.push_back({});
    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        x--; y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if (bfs(0,n - 1) == 1){
        int i = n - 1;
        cout << res[n - 1] << endl;
        vector<int> ans;
        ans.push_back(i + 1);
        while (i != 0){
            i = parent[i];
            ans.push_back(i + 1);
        }
        while(!ans.empty()){
            cout << ans.back()<< ' ';
            ans.pop_back();
        }
    }
    else cout << "IMPOSSIBLE";
    return 0;
}