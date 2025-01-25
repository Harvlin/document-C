#include <iostream>
#include <queue>
#include <unordered_set>
#include <vector>

using namespace std;

void bfs(vector<vector<char>> &graph, char start)
{
    unordered_set<char> visited;
    queue<char> q;

    q.push(start);
    visited.insert(start);

    while (!q.empty())
    {
        char node = q.front();
        q.pop();
        cout << node << " ";

        for (char neighbor : graph[node - 'A'])
        {
            if (visited.find(neighbor) == visited.end())
            {
                q.push(neighbor);
                visited.insert(neighbor);
            }
        }
    }
}

int main()
{
    vector<vector<char>> graph = {
        {'B', 'C'},      // A
        {'A', 'D', 'E'}, // B
        {'A', 'F'},      // C
        {'B'},           // D
        {'B', 'F'},      // E
        {'C', 'E'}       // F
    };

    bfs(graph, 'A'); // Output: A B C D E F

    return 0;
}