#include <bits/stdc++.h>

using namespace std;
#define ll long long
long long M = 1e9 + 7;
int res = 0;
vector<vector<int>> adj(1000000);
vector<int> children(1000000,0);
void dfs(int s,int e){
    for (int i : adj[s]){
    if (i != e){
        children[s] +=1;
        dfs(i,s);
        children[s] +=children[i];        
    }
    }
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++){
        int x,y;
        cin >> x >> y;
        if (adj[x].empty()){
            adj[x].push_back({});
            adj[x][0] = y;
        }
        else adj[x].push_back(y);
        if (adj[y].empty()){
            adj[y].push_back({});
            adj[y][0] = x;
        }
        else adj[y].push_back(x);
    }
    dfs(1,0);
    int res = 0;
    for (int i = 1; i <= n; i++){
        cout << children[i] << endl;
        if (children[i] == 1) res++;
    }
    cout << res << endl;
    return 0;
}