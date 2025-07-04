#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll INF = LLONG_MAX;


vector<vector<pair<int,int>>> adj;
vector<ll> dist;
vector<int> parent;

void dijkstra(int source) {
    int N = adj.size();
    dist.assign(N, INF);
    parent.assign(N, -1);
    dist[source] = 0;

    priority_queue<pair<ll,int>,
                   vector<pair<ll,int>>,
                   greater<pair<ll,int>>> pq;
    pq.push({0, source});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();
        if (d > dist[u]) continue;               
        for (auto &[v, w] : adj[u]) {
            ll nd = d + w;
            if (nd < dist[v]) {
                dist[v] = nd;
                parent[v] = u;
                pq.push({nd, v});
            }
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    adj.assign(N, {});
    for (int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
        
    }

    int source;
    cin >> source;
    dijkstra(source);

    for (int i = 0; i < N; i++) {
        if (dist[i] == INF)
            cout << "INF\n";
        else
            cout << dist[i] << "\n";
    }

    return 0;
}
