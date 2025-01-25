#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

void dfs_helper(vector<vector<char>> &graph, char node, unordered_set<char> &visited)
{
      visited.insert(node);
      cout << node << " ";

      for (char neighbor : graph[node - 'A'])
      {
            if (visited.find(neighbor) == visited.end())
            {
                  dfs_helper(graph, neighbor, visited);
            }
      }
}

void dfs(vector<vector<char>> &graph, char start)
{
      unordered_set<char> visited;
      dfs_helper(graph, start, visited);
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

      dfs(graph, 'A'); // Output: A B D E F C

      return 0;
}