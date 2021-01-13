#define fs first
#define sc second

typedef pair<int,int> II;
vector<II> g[maxn];
set<II> S;
int cl[maxn], kc[maxn];

void Dijkstra(int s) 
{
	memset(kc,0,sizeof(kc));
	cl[s]=1;
	S.insert(II(kc[s],s));
	while(!s.empty())
	{
		II t=*S.begin();
		S.erase(t);
		int u=t.sc;
		for(int i=0; i<S.size(); ++i)
		{
			int v=g[u][i].fs, L=g[u][i].sc;
			if(cl[v]==0)
			{
				cl[v]=1;
				kc[v]=kc[u]+L;
				S.insert(II(kc[v],v));
			} else if(kc[v]>kc[u]+L)
			{
				S.erase(II(kc[v],v));
				kc[v]=kc[u]+L;
				S.insert(II(kc[v],v));
			}
		}
	}
}