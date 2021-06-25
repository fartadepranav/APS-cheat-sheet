void dijkstra(int G[MAX][MAX], int n, int s)
{
    int weight[MAX][MAX], distance[MAX], path[MAX], visited[MAX], count, dist, node, i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (G[i][j] == 0)
                weight[i][j] = INF;
            else
                weight[i][j] = G[i][j];

    for (i = 0; i < n; i++)
    {
        distance[i] = weight[s][i];
        path[i] = s;
        visited[i] = 0;
    }

    distance[s] = 0;
    visited[s] = 1;
    count = 1;

    while (count < n - 1)
    {
        dist = INF;

        for (i = 0; i < n; i++)
            if (distance[i] < dist && !visited[i])
            {
                dist = distance[i];
                node = i;
            }

        visited[node] = 1;
        for (i = 0; i < n; i++)
            if (!visited[i])
                if (dist + weight[node][i] < distance[i])
                {
                    distance[i] = dist + weight[node][i];
                    path[i] = node;
                }
        count++;
    }

    for (i = 0; i < n; i++)
        if (i != s)
        {
            printf("\nDistance of node%d=%d", i, distance[i]);
            printf("\nPath=%d", i);

            j = i;
            do
            {
                j = path[j];
                printf("\t%d", j);
            } while (j != s);
        }
}
