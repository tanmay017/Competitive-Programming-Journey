//Resources to learn : CLRS Book + Striver Video
#include <bits/stdc++.h>
using namespace std;

map<char, vector<char>> adj; //Adjacency List
map<char, bool> visited;
stack<char> st;

void addEdge(char u, char v)
{ //Adds Edge u -> v
    adj[u].push_back(v);
}
void helperDfs(char src)
{
    visited[src] = true;
    for (auto neighbours : adj[src])
    {
        if (!visited[neighbours])
        {
            helperDfs(neighbours);
        }
    }
    st.push(src);
}

void printTopologicalSort(char src)
{
    helperDfs(src);
    for (auto curr : visited)
    {
        if (!curr.second)
        {
            helperDfs(curr.first);
        }
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
}

int main()
{
    int numOfVertices, numOfEdges;
    cin >> numOfVertices >> numOfEdges;
    for (int i = 1; i <= numOfVertices; i++)
    {
        char vertex;
        cin >> vertex;
        visited[vertex] = false;
    }
    for (int i = 1; i <= numOfEdges; i++)
    {
        char u, v;
        cin >> u >> v;
        addEdge(u, v);
    }
    char src;
    cin >> src;
    printTopologicalSort(src);
}
