#include <bits/stdc++.h>
using namespace std;

bool maze_runner(vector<vector<int>>& array1, int row_count, int col_count) {
    if (array1.empty() || row_count < 0 || col_count < 0 || row_count >= array1[0].size() || col_count >= array1[0].size() || array1[row_count][col_count] != 0) {
        return false;
    }
    if ((row_count == array1[0].size() - 1) && (col_count == array1[0].size() - 1)) {
        return true; //Solved
    }
    array1[row_count][col_count] = 2;
    if (maze_runner(array1, row_count - 1, col_count) || maze_runner(array1, row_count + 1, col_count) || maze_runner(array1, row_count, col_count - 1) || maze_runner(array1, row_count, col_count + 1)) {
        return true;
    }
    array1[row_count][col_count] = 0;
    return false;
}

int main() {
    cout << "Enter the number 'n' for n x n matrix: ";
    int n;
    cin >> n;
    vector<vector<int>> arr;
    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << " row: ";
        int wrong_input = 0;
        vector<int> temp;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (x != 0 && x != 1) {
                cout << "Kindly enter either 0 or 1.\n";
                wrong_input = 1;
                i = i - 1;
                break;
            }
            temp.push_back(x);
        }
        if (wrong_input == 0)
            arr.push_back(temp);
    }

    if(maze_runner(arr,0,0)){
        cout<<"true";
    }
    else    cout<<"false";
    
    return 0;
}
