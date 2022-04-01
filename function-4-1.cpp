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
        // creating return array
        int* ret = new int[2];
        ret[0] = max;
        ret[1] = min;
        return ret;
}


