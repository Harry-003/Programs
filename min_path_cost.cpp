//  min_path_cost.cpp: Rishabh Dev
//  Description: Minimum Path Cost while traversing from (0, 0) to (m, n) using Dynamic Programming(Top Down).
#include <iostream>
#include <vector>
using namespace std;

int min_cost(vector<vector<int>> cost, int m, int n)
{
    static int i, j;

    static vector<vector<int>> total_cost(cost.size(), vector<int>(cost[0].size()));

    total_cost[0][0] = cost[0][0];

    for (int i = 1; i <= m; i++)
    {
        total_cost[i][0] = total_cost[i - 1][0] + cost[i][0];
    }

    for (int i = 1; i <= n; i++)
    {
        total_cost[0][i] = total_cost[0][i - 1] + cost[0][i];
    }

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            total_cost[i][j] = min(min(total_cost[i - 1][j], total_cost[i][j - 1]), total_cost[i - 1][j - 1]) + cost[i][j];

    return total_cost[m][n];
}

int main()
{
    vector<vector<int>> cost = {{1, 2, 3}, {4, 8, 2}, {1, 5, 3}};

    cout << min_cost(cost, 2, 2) << endl;
    cout << min_cost(cost, 2, 1);

    return 0;
}