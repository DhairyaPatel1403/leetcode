class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> left(height.size(), 0); 
        vector<int> right(height.size(), 0);
        left[0] = height[0];
        right[n-1] = height[n-1];
        for(int i=1; i<height.size(); i++){
            left[i] = max(left[i-1], height[i]);
        }
        for(int i=n-2; i>=0; i--){
            right[i] = max(right[i+1], height[i]);
        }
        int temp=0;
        for(int i=0; i<height.size(); i++){
            temp += min(left[i], right[i]) - height[i];
        }
        return temp;
        
    }
};