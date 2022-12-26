class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int last = n-1;
        // sub-problem - check if current last can be reachable by any i+nums[i], in end curr last should be zero
        for(int i=n-2; i>=0; i--){
            if(i+nums[i]>=last){ //changing the last everytime and breaking into sub-probs.
                last=i;
            }
        }
        return last==0;
    }
};