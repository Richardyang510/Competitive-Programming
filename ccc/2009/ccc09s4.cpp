#include <bits/stdc++.h>
using namespace std;
int n,t,k,d,lowest = INT_MAX;
vector<pair<int,int>> al[5002];
int dist[5002], vis[5002];
int pen[5002];
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> t;
    for(int i = 0,a,b,c;i < t;i++){
        cin >> a >> b >> c;
        al[a].push_back(make_pair(b,c));
        al[b].push_back(make_pair(a,c));
    }
    cin >> k;
    for(int i = 0,a,b;i < k;i++){
        cin >> a >> b;
        pen[a] = b;
    }
    cin >> d;
    for(int i = 1;i <= n;i++){
        dist[i] = 2000000000;
    }
    dist[0] = 2000000001;
    dist[d] = 0;
    while(true){
        int minV = 0;
        for(int i = 1;i <= n;i++){
            if(!vis[i] && dist[minV] > dist[i]){
                minV = i;
            }
        }
        if(minV == 0) break;
        vis[minV] = true;
        for(int v = 0;v < al[minV].size();v++){
            int dest = al[minV].at(v).first;
            dist[dest] = min(dist[dest], dist[minV] + al[minV].at(v).second);
        }
    }
    for(int i = 1;i <= n;i++){
        if(pen[i] != 0){
            dist[i] += pen[i];
            lowest = min(dist[i], lowest);
        }
    }
    cout << lowest;
}
