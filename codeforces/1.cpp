#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front
#define in insert
#define b back
#define f front
#define p push
#define FOR(i,a,b) for (ll i=a; i<=b; i++)
#define FOD(i,a,b) for (ll i=a; i>=b; i--)
#define mp make_pair
#define ub upper_bound
#define lb lower_bound
#define X first
#define Y second
#define endl "\n"
//priority_queue <int> ; less
//priority_queue <int,vector<int>,greater<int> > ; greater
using namespace std;
ll a[100005],s[100005],t[100005],res,n,tmp,l,r,m;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++) {
		cin>>a[i];
		t[i]=t[i-1]+a[i];
		s[i]=s[i-1]+t[i];
	}
	tmp=res=s[n];
	for (int i=1;i<=n;i++) {
		if (res<=tmp) {
			res=tmp;
			l=i;	
		}
		tmp-=a[i]*(n-i+1);
	}
	//cout<<l<<" "<<res<<endl;
	tmp=res;
	r=n;
	while(r>l) {
		tmp-=t[r]-t[l-1];
		//cout<<tmp<<endl;
		res=max(res,tmp);
		r--;
	}
	cout<<res;
	return 0;
}

