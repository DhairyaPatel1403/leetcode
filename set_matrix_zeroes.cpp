class Solution {
public:
    vector<pair<int, int>> vec;
    void setzero(vector<vector<int>>& m){
        int row = m.size();
        int col = m[0].size();
        for(auto k : vec){
            int i=0, j=0;
            while(i<row){
                m[i][k.second] = 0;
                i++;
            }
            while(j<col){
                m[k.first][j] = 0;
                j++;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    vec.push_back({i, j});
                }
            }
        }
        setzero(matrix);
    }
};