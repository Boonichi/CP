// hoaf13 
 
#include<bits/stdc++.h>
 
using namespace std;
 
struct edge{
    int u;
    int v;
    int w;
};
 
int n,m;
edge edges[15004];
int par[10004];
int rankz[10004];
int res = 0;
 
void init(){
    cin >> n;
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }
    for(int i=0;i<=n;i++){
        par[i] = i;
        rankz[i] = 0;
    }
}
 
 
bool cmp(edge x , edge y){
    if (x.w < y.w) return true;
    return false;
}
 
int findz(int u){
    if (par[u] == u) return par[u];
    return findz(par[u]);
}
 
bool joinz(int u , int v){
    u = findz(u);
    v = findz(v);
    if (u == v) return false;
    if (rankz[u] == rankz[v]){
        rankz[u]++;
    }
    if (rankz[u] < rankz[v]) par[u] = v;
    else par[v] = u;
    return true;
}
 
void process(){
    sort(edges, edges+m,cmp);
    for(int i=0;i<m;i++){
        if (joinz(edges[i].u , edges[i].v)){
            res += edges[i].w;
        }
    }
    cout << res;
}
 
int main(){
 
    init();
    process();
 
    return 0;
}