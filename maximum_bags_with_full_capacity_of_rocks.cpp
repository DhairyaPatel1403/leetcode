class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = rocks.size();
        for(int i=0; i<n; i++){
            capacity[i] = capacity[i] - rocks[i];
        }
        sort(capacity.begin(), capacity.end());
        for(int i=0; i<n; i++){
            if(additionalRocks > 0){
                if(additionalRocks>=capacity[i]){
                    additionalRocks = additionalRocks - capacity[i];
                    capacity[i] = 0;
                }
                else{
                    additionalRocks = 0;
                    capacity[i] = capacity[i] - additionalRocks;
                }
            }
        }
        int ans=0;
        for(auto i : capacity){
            if(i==0){
                ans++;
            }
        }
        return ans;
    }
};