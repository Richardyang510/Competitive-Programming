#include <bits/stdc++.h>
using namespace std;
int l, n;
string s;
int main(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cin >> l;
    for(int cases = 0; cases < l;cases++){
        cin >> n;
        string in[n];
        map<string,int> M;
        vector<int> a[n];
        for(int i = 0;i < n;i++){
            cin >> in[i];
        }
        M[in[n-1]] = 0;
        for(int i = n-2, x = 1;i >= 0;i--){
            if(M.find(in[i]) == M.end()){
                M[in[i]] = x++;
            }
            a[M[in[i+1]]].push_back(M[in[i]]);
        }
        bool vis[n];
        int dist[n];
        for(int i = 0;i < n;i++){
            vis[i] = false;
            dist[i] = 0;
        }
        queue<int> Q;
        Q.push(0);
        vis[0] = true;
        while(!Q.empty()){
            int cur = Q.front();
            Q.pop();
            for(int i = 0;i < a[cur].size();i++){
                if(!vis[a[cur].at(i)]){
                    Q.push(a[cur].at(i));
                    dist[a[cur].at(i)] = dist[cur] + 1;
                    vis[a[cur].at(i)] = true;
                }
            }
        }
        int longest = 0;
        for(int i = 0;i < n;i++){longest = max(longest, dist[i]);}
        cout << n*10 - longest*2*10 << endl;
    }
}
