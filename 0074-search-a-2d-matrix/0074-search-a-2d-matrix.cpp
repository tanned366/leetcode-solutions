class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) {
            return false;
        }
        int i = 0, j = matrix[0].size() - 1;
        while (i < matrix.size() && j >= 0) {
            if (matrix[i][j] == target) {
                return true;
            } else if (matrix[i][j] > target) {
                j--;
            } else {
                i++;
            }
        }
        return false;
    }
};

class Solution {
public:
    bool searchRowWise(vector<vector<int>>& matrix, int target, int row) {
        int n = matrix[0].size();
        int st = 0, end = n-1;
        while(st <= end) {
            int mid = st + (end-st)/2;
            if(target == matrix[row][mid]) {
                return true;
            } else if(target > matrix[row][mid]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) {
            return false;
        }
        int m = matrix.size(), n = matrix[0].size();
        int startRow = 0, endRow = m-1; 
        while (startRow <= endRow) {
            int midRow = startRow + (endRow-startRow)/2;
            if (matrix[midRow][0] <= target && target <= matrix[midRow][n-1] ) {
                return searchRowWise(matrix, target, midRow);
            } else if (target >= matrix[midRow][n-1]) {
                startRow = midRow + 1;
            } else {
                endRow = midRow - 1;
            }
        }
        return false;
    }
};
Time: 0 ms (100%), Space: 12.1 MB (77.38%) - LeetHub
