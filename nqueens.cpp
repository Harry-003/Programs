#include <iostream>
using namespace std;
bool isSafe(int arr[1000][1000], int x, int y, int n)
{
    for (int i = 0; i < x; i++)
    {
        if (arr[i][y] == 1)
        {
            return false;
        }
    }
    int row = x;
    int col = y;
    while (row >= 0 && col >= 0)
    {

        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }
    row = x;
    col = y;
    while (row >= 0 && col < n)
    {

        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueen(int arr[1000][1000], int x, int n)
{
    if (n <= 3)
    {
        cout << "No solution exists" << endl;
        return true;
    }
     int cols = 0;
    if (x >= n)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0)
                {
                    cols = j;
                }
                if (arr[i][j] == 1)
                {
                    cout << i << "," << j;
                    arr[i][j] = 0;
                }
            }
            cout << " ";
        }
    }
    int col = 0;
    if (cols >= n)
    {
        return true;
    }
    else
    {
        if (x == 0)
        {
            col = cols;
        }
        else
        {
            col = 0;
        }
        while (col < n)
        {

            if (isSafe(arr, x, col, n))
            {

                arr[x][col] = 1;
                if (nQueen(arr, x + 1, n))
                {
                    return true;
                }
                arr[x][col] = 0;
            }
            col++;
        }
        return false;
    }
}

int main()
{
    int n = 0;
    cout << "Enter no of queens " << endl;
    cin >> n;
    int arr[1000][1000] = {};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    cout<<nQueen(arr,0,n);

}
