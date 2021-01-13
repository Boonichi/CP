#include <bits/stdc++.h>

using namespace std;
int n,m,l[1000][1000];
char a[1000][1000];
queue<int> q;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
void coutqueue(queue<int> q){
    while (!q.empty()){
        cout << q.front() << ' ';
        q.pop();
    }
    cout << endl;
}
void input(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
            if (a[i][j] == 'C'){
                q.push(i);
                q.push(j);
                l[i][j] = 1;
            }
        }
    }
}

void solve(){
    int b,e;
    coutqueue(q);
    while (!q.empty()){
        b = q.front(); q.pop(); e = q.front(); q.pop();
        for (int i = 0; i < 4; i++){
            if (a[b+dx[i]][e+dy[i]] == 'B'){
                cout << l[b][e];
                return;
            }
            if (a[b+dx[i]][e+dy[i]] == '.'){
                a[b+dx[i]][e+dy[i]] = '*';
                l[b+dx[i]][e+dy[i]]=l[b][e]++;
                q.push(b+dx[i]); q.push(e+dy[i]);
            }
            
        }
        coutqueue(q);
    }
}
int main(){
    freopen("input.inp","r",stdin);
    freopen("output.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    input();
    solve();
    return 0;
}