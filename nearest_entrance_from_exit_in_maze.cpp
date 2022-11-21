class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int row = maze.size(), col = maze[0].size();
        queue<pair<int, int>> q;
        q.push({entrance[0], entrance[1]});
        maze[entrance[0]][entrance[1]]='+'; //mark + to visited node too!
        int lvl=0;
        int dr[4] = {1, -1, 0, 0};  //these two arrays to traverse all four directions easily
        int dc[4] = {0, 0, -1, 1};

        while(!q.empty()){
            int s = q.size();
            lvl++;
            for(int i=0;i<s;i++){     //traverse in the current neighbors of q.front
                auto x = q.front();
                q.pop();
                int r = x.first;
                int c = x.second;
                for(int j=0;j<4;j++){  //traverse all four directions of the node
                    int new_r = r + dr[j];
                    int new_c = c + dc[j];
                    if(new_r>=0  && new_c>=0 && new_r<row && new_c<col){
                        if(maze[new_r][new_c]=='+'){
                            continue;
                        }
                        if((new_r==0 || new_c==0) || (new_r==row-1 || new_c==col-1)){
                            return lvl; 
                        }
                        q.push({new_r, new_c});
                        maze[new_r][new_c]='+';
                    }

                }
            }
        }
        return -1;
    }
};