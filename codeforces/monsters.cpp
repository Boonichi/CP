#include <bits/stdc++.h>

using namespace std;
vector<pair<int,int>> monsters;
vector<vector<int>> di = {{0,1},{1,0},{0,-1},{-1,0}};
void bfs(int x, int y,int person){
    queue<pair<int,int>> q;
    q.push({x,y});
    while(!q.empty()){
        int curx = q.front().fisrt;
        int cury = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++){
            int dx = curx + adjx[i],dy = cury + adjy[i];
            if (a[dx][dy] != '#' && visited[dx][dy]){
                movements[dx][dy]+=1;
                visited[dx][dy] = i;
                if (person == 0) parent[dx][dy] = {curx,cury};
                
                if (res[dx][dy] == 1){
                    if (person == 0) ans[dx][dy] = movements[dx][dy];
                    if (person == 1){
                        if (movements[dx][dy] > ans[dx][dy]) blocked[dx][dy] = 1;
                    }
                }
            }
        }
    }
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){ cin >> a[i][j];
        res[i][j] = 0;
        if (a[i][j] == 'A'){
            beginx = i;
            beginy = j;
        }
        if (a[i][j] == 'M') monsters.push_back({i,j});
        if (a[i][j] == '.' && ((i == 0) || (i == n-1) || (j == 0) || (j == (m - 1)))){
            res[i][j] = 1;
            blocked[i][j] = 0;
            passes.push_back({i,j});
        }
        }
    }
    bfs(beginx,beginy,0);
    while(!monsters.empty()){
        bfs(monsters.back().first,monsters.back().second,1);
        monsters.pop_back();
    }
    int check = 0;
    while(!passes.empty()){
        if (blocked[passes.back().first][passes.back().second] = 0){
            check = 1;
            cout << "YES" << endl;
            string s;
            int i = passes.back().fisrt, j = passes.back().second;
            passes.pop_back();
            while (a[i][j] != 'A'){
                if (parent[i][j] == 0) s+='U';
                if (parent[i][j] == 1) s+='R';
                if (parent[i][j] == 2) s+='D';
                if (parent[i][j] == 3) s+='L';
                int x = i, y = j;
                i-=adjx[
            }
        }
    }
    if (check == 0) cout << "NO";
    return 0;
}