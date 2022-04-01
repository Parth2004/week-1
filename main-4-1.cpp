#include <iostream>
#include <climits>

using namespace std;

int* max_min(int** vals, int num_rows, int num_cols) {
        // init the vars to keep track of min, max vals with worst possible values
        int max = -INT_MAX;
        int min = INT_MAX;
        // traversing the matrix (2d array)
        for(int i = 0; i < num_rows; i++) {
                for(int j = 0; j < num_rows; j++) {
                        // checking if the val is greater then the max 
                        // encountered so far or smaller than the min
                        // if yes, max, min vars are updated appropriately
                        if(vals[i][j] > max) {
                                max = vals[i][j];
                        }
                        if(vals[i][j] < min) {
                                min = vals[i][j];
                        }
                }
        }
        // return array
        int* back = new int[2];
        back[0] = max;
        back[1] = min;
        return back;
}


int main() {
        
        int row1[] = {10, 15, 99};
        int row2[] = {100, 5, 73};
        int row3[] = {23, 56, 1};
        int* vals[] = {row1, row2, row3};
        int nrows = 3;
        int ncols = 3;
        // function call
        int *mm = max_min(vals, nrows, ncols);
        // outputting the returned array
        cout << mm[0] << " " << mm[1] << endl;
        return 0;
}