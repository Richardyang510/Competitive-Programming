#include <bits/stdc++.h>
using namespace std;
int N, M, T, Q;
vector<int> a[1001];
void BFS(int A, int B){
    bool vis[N+1];
    int dist[N+1];
    queue<int> q;
    q.push(A);
    for(int i = 1;i <= N;i++){
        vis[i] = false;
    }
    vis[A] = true;
    dist[A] = 0;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int i = 0;i < a[cur].size();i++){
            if(!vis[a[cur].at(i)]){
                q.push(a[cur].at(i));
                dist[a[cur].at(i)] = dist[cur] + 1;
                vis[a[cur].at(i)] = true;
            }
        }
    }
    if(vis[B]) cout << T*dist[B] << endl;
    else cout << "Not enough hallways!" << endl;
}
int main(){
    cin >> N >> M >> T;
    for(int i = 0;i < M;i++){
        int A, B;
        cin >> A >> B;
        a[A].push_back(B);
    }
    cin >> Q;
    for(int i = 0;i < Q;i++){
        int A, B;
        cin >> A >> B;
        BFS(A,B);
    }
}
