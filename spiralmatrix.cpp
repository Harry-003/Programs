#include<iostream>
using namespace std;

int main()
{   cout <<" row column"; 
    int row, col;
    cin >> row >> col;
    cout << "Array";
    int arr[row][col];
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cin >> arr[i][j];
        }
    }
    // now 
    int first_row=0;
    int first_column=0;
    int last_row=row-1;
    int last_column=col-1;
    while(first_row<=last_row && first_column<=last_column){
        for (int i=first_column;i<=last_column;i++){
            cout << arr[first_row][i];
        }
        first_row++;
        for (int i=first_row;i<=last_row;i++){
            cout << arr[i][last_column];
        }
        last_column--;
        for (int i=last_column;i>=first_column;i--){
            cout << arr[last_row][i];
        }
        last_row--;
        for (int i=last_row;i>=first_row;i--){
            cout << arr[i][first_column];
        }
        first_column++;
    }
    return 0;
}