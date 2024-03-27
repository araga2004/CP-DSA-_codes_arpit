vector<int> bellmonFord(int n, int m, int src, vector<vector<int>> &edges) {

   vector<int> dist(n + 1, 0);
   for(int i = 1; i < n + 1; i++)
   {
       dist[i] = 1e8;
   }
   dist[src] = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(auto it : edges)
        {
            int u = it[0];
            int v = it[1];
            int w = it[2];
            if(dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }
    return dist;
}
