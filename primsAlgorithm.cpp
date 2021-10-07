void prim(vector<pair<int,int> >&adj[],int V,int source,int dist[],int pred[]){
    bool vis[V];
    for(int i=0;i<V;i++)  vis[i]=false;
    priority_queue<pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int> > > pq; //minheap
    for(int i=0;i<V;i++)
       dist[i]=-1;
    dist[source]=0;
    pq.push(make_pair(dist[source],source));
    while(!pq.empty()){
        int u=pq.top().second;
        vis[u]=true;
        pq.pop();
        for(auto &p:adj[u]){
            int v=p.first,weight=p.second;
            if(vis[p]) continue;
            if (dist[v]==-1) 
            { 
                dist[v] = weight; 
                pq.push(make_pair(dist[v], v)); 
                pred[v]=u;
            }
            else if(dist[v]>weight){
                dist[v]=weight;
                pq.push(make_pair(dist[v], v)); 
                pred[v]=u;
                
            }
        }
    }
}
