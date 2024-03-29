#include <bits/stdc++.h>
using namespace std;

typedef pair <long long,long long> ii;
vector <ii> a[50007];
long long n,m,d[50007],tr[50007],sl[50007];

void dijkstra()
{
    priority_queue <ii> pq;
    fill(d,d+n+1,1e11);
    d[1]=0;
    pq.push(ii(0,1));

    long long u,du;
    while (!pq.empty())
    {
        u=pq.top().second;
        du=-pq.top().first;
        pq.pop();
        if (du!=d[u]) continue;
        for (long i=0;i<a[u].size();i++)
        {
            long long v=a[u][i].first;
            long long wv=a[u][i].second;
            if (d[v]==d[u]+wv) sl[v]=sl[v]+sl[u];
            if (d[v]>d[u]+wv)
            {
                d[v]=d[u]+wv;
                sl[v]=sl[u];
                tr[v]=u;
                pq.push(ii(-d[v],v));
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    freopen("ROAD.inp","r",stdin);
    freopen("ROAD.out","w",stdout);
    cin >> n >> m;
    long long k,u,v,w;
    memset(sl,0,sizeof(sl));
    sl[1]=1;
    for (long i=1;i<=m;i++)
    {
        cin>>k>>u>>v>>w;
        a[u].push_back(ii(v,w));
        if (k==2) a[v].push_back(ii(u,w));
    }
    dijkstra();
    cout<< d[n]<<" "<< sl[n]<<endl;
}
